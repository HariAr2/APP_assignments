import socket
import time
def main():
    host="127.0.0.1"
    port=12345
    client_socket=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    start_time=time.time()
    client_socket.connect((host,port))
    connetion_time=time.time()-start_time
    client_socket.send("HI server".encode())
    response=client_socket.recv(1024)
    tot_time=time.time()-start_time
    print(f"Connected to the server in {connetion_time} seconds")
    print(f"total time taken:{tot_time}")
    print(f"received response is {response.decode()}")
if __name__=="__main__":
    main()