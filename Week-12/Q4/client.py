import socket
import random

def main():
    server_ip = '127.0.0.1'
    server_port = 12345
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

    # Generate a random number between 1 and 100
    random_number = random.randint(1, 100)
    print(f"Sending number to server: {random_number}")

    client_socket.sendto(str(random_number).encode(), (server_ip, server_port))

    data, server_address = client_socket.recvfrom(1024)
    result = data.decode()
    print(f"Received result from server: {result}")

if __name__ == "__main__":
    main()
