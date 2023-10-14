"""5. Implement a python function to Reverse a given String and also check for palindrome
or not."""
def palindrome(a):
    if(a.lower()==a[::-1].lower()):
        print(a,"is a palindrome")
    else:
        print(a,"is not a palindrome")
x=input("String:")
palindrome(x)