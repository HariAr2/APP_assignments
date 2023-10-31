import socket
def main():
    host="127.0.0.1"
    port=54321
    server_socket=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
    server_socket.bind((host,port))
    print(f"server is runnin {host}:{port}")
    while True:
        data,address=server_socket.recvfrom(1024)
        message=data.decode()
        print(f"received messsge from client{address}:{message}")
        ack_msg="Received the message"+message
        server_socket.sendto(ack_msg.encode(),address)
if __name__=="__main__":
    main()