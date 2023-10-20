'''1. Implement a python program to find the first largest and second largest numbers in an
Array. Note: should not use any built-in sorting functions or libraries.'''

def large(a):
    for i in range(0,len(a)):
        for j in range (i+1,len(a)):
            if(a[i]>=a[j]):
                a[i],a[j]=a[j],a[i]#sorts in ascending order small to big
    print(a[-1],a[-2])#print the last two elements
n=int(input("Number of elements: "))
arr=[]
for i in range (0,n):
    item=int(input())
    arr.append(item)
large(arr)
