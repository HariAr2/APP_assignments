"""4. Write a python program to Check if a Number is Even or Odd and also check whether
it is Prime or not."""
def primes(x):
    if(x%2==0):
        print(x,"is even")
    else:
        print(x,"is odd")
    counter=0
    for i in range(2,x):
        if(x%i==0):
            counter=1
    if(counter==1):
        print(x,"not a prime")
    elif(counter==0):
        print(x,"is a prime")
a=int(input("Number:"))
primes(a)