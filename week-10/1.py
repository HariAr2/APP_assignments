"""1. Write a python program to calculate the sum of Two numbers and Three numbers.
However, if the sum is between 120 to 320 it will return 200."""
def two_sum(x,y):
    z=x+y
    if(z>=120 and z<320):
        z=200
    return z
def three_sum(x,y,z):
    a=x+y+z
    if(a>=120 and a<320):
        a=200
    return a
num1=int(input("Enter number 1:"))
num2=int(input("enter number 2:"))
num3=int(input("enter number 3:"))
print("sum of three numbers:\n")
print(three_sum(num1,num2,num3))
print("sum of two number:\n")
print(two_sum(num1,num2))