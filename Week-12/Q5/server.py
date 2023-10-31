import socket
def main():
    host = "127.0.0.1" 
    port=54321
    server_socket=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
    server_socket.bind((host,port))
    print(f"server is running on {host}:{port}")
    while True:
        data,address=server_socket.recvfrom(1024)
        print(f"received data from{address}:{data}")
if __name__=="__main__":
    main()

