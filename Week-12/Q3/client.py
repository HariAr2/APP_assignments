import socket
def main():
    server_ip="127.0.0.1"
    server_port=12345
    client_socket=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
    message="UDP response"
    client_socket.sendto(message.encode(),(server_ip,server_port))
    data,server_address=client_socket.recvfrom(1024)
    print(f"Received response from {server_address}: {data.decode()}")
if __name__ =="__main__":
    main()