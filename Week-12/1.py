import socket
def main():
    server_ip="120.01.003"
    server_port=8088
    server_socket=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    server_socket.bind((server_ip,server_port))
    server_socket.listen(3)
    print(f"server is listening on {server_ip}on{server_port}")
    while TRUE:
        client_socket,clinet_address=server_socket.accept()
        print(f"Accepted connection from {clinet_address}")
        data=client_socket.recv(1024).decode()
        print(f"Received Data  {data}")
        response="HI HELLO"
        client_socket.send(response.encode())

if __name__="__main__":
    main()

