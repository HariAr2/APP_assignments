"""6. Write a python program to Generate Fibonacci Sequence."""
def fibonacci(x):
    a=0
    b=1
    if(x==0):
        print(a)
    elif(x==1):
        print(b)
    else:
        print(a)
        print(b)
        for i in range (2,x):
            c=a+b
            a=b
            b=c
            print(c)
y=int(input("Number:"))
fibonacci(y)