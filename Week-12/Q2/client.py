import socket
import pickle

def main():
    # Define the server's IP address and port number
    server_ip = '127.0.0.1'  # Localhost
    server_port = 12345  # Same port as in the server

    # Create a socket object
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    try:
        # Connect to the server
        client_socket.connect((server_ip, server_port))

        # Define a list of numbers
        numbers = [1, 2, 3, 4, 5]

        # Send the list to the server
        data = pickle.dumps(numbers)
        client_socket.send(data)

        # Receive the result from the server
        result = client_socket.recv(1024).decode()
        print("Server says: Sum of numbers is", result)

    except ConnectionRefusedError:
        print("Connection to the server failed. Make sure the server is running.")
    finally:
        # Close the client socket
        client_socket.close()

if __name__ == "__main__":
    main()
