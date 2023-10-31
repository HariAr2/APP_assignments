import socket
def main():
    host="127.0.0.1"
    port=12345
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.bind((host,port))
    print(f"server is connected {host}:{port}")
    while True:
        data,addr=s.recvfrom(1024)
        msg=data.decode()
        print(f"received data from {addr} is {msg}")
if __name__=="__main__":
    main()
