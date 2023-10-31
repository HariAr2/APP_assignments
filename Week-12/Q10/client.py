import socket
def main():
    host="127.0.0.1"
    port=12345
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    while True:
        msg=input("Enter a string or('exit'):")
        if msg.lower()=='exit':
            break
        s.sendto(msg.encode(),(host,port))
    s.close()
if __name__=="__main__":
    main()  