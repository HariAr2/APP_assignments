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