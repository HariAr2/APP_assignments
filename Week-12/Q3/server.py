import socket
def main():
    server_ip="127.0.0.1"
    server_port=8088
    server_socket=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
    server_socket.bind((server_ip, server_port))
    print(f"server is connected on {server_ip} in {server_port}")
    while True:
        data,client_address=server_socket.recvfrom(1024)
        print(f"Recived data from {client_address} and data is {data}")
        response="UDP response"
        server_socket.sendto(response.encode(),client_address)
if __name__ =="__main__":
    main()

