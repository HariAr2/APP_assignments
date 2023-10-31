import socket
def main():
    host="127.0.0.1"
    port=12345
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  
    s.bind((host,port))
    s.listen(1)
    print(f"server is listening {host}:{port}")
    while True:
        c,address=s.accept()
        file_data=c.recv(1024)
        if file_data:
            with open("receivedfile.txt","wb") as f:
                f.write(file_data)
            print(f"file received and saved as 'receivedfile.txt' ")
        c.close()
if __name__=="__main__":
    main()
