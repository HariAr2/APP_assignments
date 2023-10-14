""""2. Implement a python function to find the Maximum of Three numbers."""
def greatest(x,y,z):
    if(x>y and x>z):
        return x
    elif(y>x and y>z):
        return y
    elif(x==y and x==z and z==y):
        print("All values are equal")
        return x
    else:
        return z
num1=int(input("Number 1:"))
num2=int(input("Number 2:"))
num3=int(input("Number 3:"))
print("Greatest is:",greatest(num1,num2,num3))