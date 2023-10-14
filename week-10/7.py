"""7. Write a python program to calculate the area and perimeter of different geometric
shapes (circle, rectangle, triangle, etc.)."""
def circle(r):
    PI=3.14
    print("perimeter of circle:",2*PI*r)
def triangle(a,b,c):
    x=a+b+c
    print("perimeter of triangle:",x)
def rectangle(l,b):
    rect=2*(l+b)
    print("perimeter of rectangle:",rect)
r=int(input("Radius of Circle:\n"))
print("enter Triangle sides:")
num1=int(input())
num2=int(input())
num3=int(input())
l=int(input("L of rectangle:"))
b=int(input("B of rectangle"))
circle(r)
triangle(num1,num2,num3)
rectangle(l,b)