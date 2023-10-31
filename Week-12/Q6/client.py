import socket
def main():
    host="127.0.0.1"
    port=54321
    client_socket=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
    message="UDP message"
    client_socket.sendto(message.encode(),(host,port))
    print(f"Message sent:{message}")
    data,address=client_socket.recvfrom(1024)
    ack_message=data.decode()
    print(f"ACK received from {address}:{ack_message}")
if __name__=="__main__":
    main()