import socket
import time
def main():
    host="127.0.0.1"
    port=12345
    server_socket=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    server_socket.bind((host,port))
    server_socket.listen(1)
    print(f"server is listening{host}:{port}")
    while True:
        client_socket,address=server_socket.accept()
        data=client_socket.recv(1024)
        if data:
            client_socket.send("server response ".encode())
            client_socket.close()
if __name__=="__main__":
    main()