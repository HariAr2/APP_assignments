import socket
def main():
    host="127.0.0.1"
    port=12345
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  
    s.bind((host,port))
    s.listen(1)
    print(f"Server is listening...{host}:{port}")
    while True:
        c , addr = s.accept()
        data=c.recv(1024)
        if data:
            c.send(data)
        c.close()
if __name__=="__main__":
    main()