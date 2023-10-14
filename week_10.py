#!/usr/bin/env python
# coding: utf-8

# In[6]:


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


    


# In[11]:


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


# In[16]:


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


# In[21]:


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


# In[24]:


"""5. Implement a python function to Reverse a given String and also check for palindrome
or not."""
def palindrome(a):
    if(a.lower()==a[::-1].lower()):
        print(a,"is a palindrome")
    else:
        print(a,"is not a palindrome")
x=input("String:")
palindrome(x)


# In[27]:


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


# In[32]:


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


# In[34]:


"""8. Implement a python function to Convert Celsius to Fahrenheit and Fahrenheit to
Celsius."""
def c_f(x):
    f=c*(9/5)+32
    print(x,"C =",f,"F")
def f_c(y):
    c=(f-32)*(5/9)
    print(y,"F =",c,"C")
c=int(input("Celsius:"))
f=int(input("Farenheit:"))
c_f(c)
f_c(f)


# In[41]:


"""9. Write a Python program that accepts a string and counts the number of upper and
lower case letters."""
def count(s):
    low=0
    up=0
    spaces=0
    for i in s:
        if(i.islower()==True):
            low+=1
        elif(i.isupper()==True):
            up+=1
        elif(i.isspace()==True):
            spaces+=1
        
    print("Number of lower case letters:",low)
    print("Number of upper case letters:",up)
    print("Number of spaces:",spaces)
s=input("String:")
count(s)


# In[46]:


"""10. Write a python program to perform Arithmetic operations on Complex Numbers."""
def opp(x,y):
    add=x+y
    sub=x-y
    mul=x*y
    div=x/y
    print("sum=",add,"\n","difference=",sub,"\n","Multiplication=",mul,"\n","Division=",div)
a=complex(input("number1:"))
b=complex(input("number2:"))
opp(a,b)


# In[ ]:




