import socket
def main():
    host="127.0.0.1"
    port=12345
    c=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    c.connect((host,port))
    file_name="file.txt"
    with open(file_name,"rb")as file:
        file_data=file.read()
    c.send(file_data)
    print(f"Sent file data {file_data}")
    c.close()
if __name__=="__main__":
    main()