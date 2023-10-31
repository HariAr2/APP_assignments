import socket
def main():
    host="127.0.0.1"
    port=12345
    c = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  
    c.connect((host,port))
    try:

        while True:
            msg =input("Enter or string or ('exit' to close ):")
            if msg.lower() == "exit":
                break
            c.send(msg.encode())
            data =c.recv(1024)
            print(f"Data recieved is {data.decode()}")
    except ConnectionResetError:
        print("connection is stopped")
    finally:
        c.close()
if __name__=="__main__":
    main()
