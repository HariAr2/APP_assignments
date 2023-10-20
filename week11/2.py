'''2. Write a Python program to calculate the sum of even numbers and the sum of odd
numbers in an array.'''
def sum(arr):
    oddsum=0
    evensum=0
    for i in range (0,len(arr)):
        if(arr[i]%2==0):
            evensum+=arr[i]
        else:
            oddsum+=arr[i]
    print("Sum of even numbers: ",evensum)
    print("Sum of odd numbers: ",oddsum)
n=int(input("Number of elements: "))
arr=[]
for i in range(0,n):
    item=int(input())
    arr.append(item)
sum(arr)