import socket

def main():
    server_ip = '127.0.0.1'  # Localhost
    server_port = 12345

    server_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    server_socket.bind((server_ip, server_port))

    print(f"Server is listening on {server_ip}:{server_port}")

    while True:
        data, client_address = server_socket.recvfrom(1024)
        number = int(data.decode())

        if number % 2 == 0:
            result = "even"
        else:
            result = "odd"

        server_socket.sendto(result.encode(), client_address)

if __name__ == "__main__":
    main()
