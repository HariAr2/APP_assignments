import socket
import pickle

def sum_numbers(numbers):
    return sum(numbers)

def main():
    # Define the server's IP address and port number
    server_ip = '127.0.0.1'  # Localhost
    server_port = 12345  # Choose a port number

    # Create a socket object
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    # Bind the socket to the IP address and port
    server_socket.bind((server_ip, server_port))

    # Listen for incoming connections
    server_socket.listen(5)

    print(f"Server is listening on {server_ip}:{server_port}")

    while True:
        # Accept a client connection
        client_socket, client_address = server_socket.accept()
        print(f"Accepted connection from {client_address}")

        # Receive data from the client (a list of numbers)
        data = client_socket.recv(1024)
        numbers = pickle.loads(data)

        # Calculate the sum
        result = sum_numbers(numbers)

        # Send the result back to the client
        client_socket.send(str(result).encode())

        # Close the client socket
        client_socket.close()

if __name__ == "__main__":
    main()
