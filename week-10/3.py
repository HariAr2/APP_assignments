#3. Write a python program to calculate the Factorial of a given number.
def fact(x):
    if(x==1 or x==0):
        return x
    else:
        for i in range(2,x):
            x*=i
        return x
a=int(input("Enter a number:"))
print(fact(a))