import socket
def main():
    host="127.0.0.1"
    port=54321
    client_socket=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
    message="Hello UDP Server"
    client_socket.sendto(message.encode(),(host,port))
    print(f"sent message to server:{message}")
if __name__=="__main__":
    main()