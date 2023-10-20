#!/usr/bin/env python
# coding: utf-8

# In[11]:


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


# 

# In[12]:


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


# In[18]:


'''3. Write a python program to count the Occurrences of a Specific Element in an Array.'''
def occ(arr,n):
    count=0
    for i in range (0,len(arr)):
        if(arr[i]==n):
            count+=1
    print("Number of occurences = ",count)
n=int(input("Number of elements: "))
arr=[]
for i in range(0,n):
    item=int(input())
    arr.append(item)
k=int(input("Key = "))
occ(arr,k)


# In[24]:


'''4. Write a Python program that takes a sentence as input and identifies and prints all the
palindromic words in the sentence. Use an array to store the palindromic words.'''

def palindrome(string):
    if(string.lower()==string[::-1].lower()):
        return True
def split(sentence):
    count=0
    words=sentence.split(" ")
    for i in words:
        if(palindrome(i)):
            count+=1
    print("number of palindrome = ",count)

string=input("string: ")
split(string)


# In[27]:


'''5. Write a Python program that takes a list of numbers and removes all duplicates from the
list, preserving the original order of elements.'''

def original(arr):
    new=[]
    new=list(set(arr))
    print(new)
n=int(input("Number of elements: "))
arr=[]
for i in range (0,n):
    item=int(input())
    arr.append(item)
original(arr)


# In[7]:


'''6. Write a Python program that performs matrix multiplication. Ask the user to input two
matrices as lists of lists (2D arrays) and then multiply them if possible. Make sure to
check if the matrices are compatible for multiplication and handle errors gracefully.'''

def input_matrix(rows, columns):
    matrix = []
    for i in range(rows):
        row = []
        for j in range(columns):
            element = float(input(f"Enter the element at row {i + 1}, column {j + 1}: "))
            row.append(element)
        matrix.append(row)
    return matrix


def multiply_matrices(matrix1, matrix2):
    result = [[0 for _ in range(len(matrix2[0]))] for _ in range(len(matrix1))]
    
    if len(matrix1[0]) != len(matrix2):
        print("Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix.")
        return None

    for i in range(len(matrix1)):
        for j in range(len(matrix2[0])):
            for k in range(len(matrix2)):
                result[i][j] += matrix1[i][k] * matrix2[k][j]
    
    return result

def display_matrix(matrix):
    for row in matrix:
        print(' '.join(map(str, row)))

def main():
    try:
        rows1 = int(input("Enter the number of rows for the first matrix: "))
        columns1 = int(input("Enter the number of columns for the first matrix: "))
        matrix1 = input_matrix(rows1, columns1)
        
        rows2 = int(input("Enter the number of rows for the second matrix: "))
        columns2 = int(input("Enter the number of columns for the second matrix: "))
        matrix2 = input_matrix(rows2, columns2)
        
        result = multiply_matrices(matrix1, matrix2)
        
        if result:
            print("Resultant matrix:")
            display_matrix(result)
    except ValueError:
        print("Please enter valid numeric inputs for matrix elements.")

if __name__ == "__main__":
    main()


# 

# In[10]:


'''7. Write a python program to print diamond number pattern using Nested Loops.'''

def print_diamond_pattern(n):
    if n % 2 == 0:
        n += 1  # Ensure n is odd for a symmetrical diamond

    for i in range(1, n // 2 + 1):
        # Print leading spaces
        for j in range(n // 2, i, -1):
            print(" ", end="")

        # Print increasing numbers
        for j in range(1, 2 * i):
            print(j, end="")

        # Move to the next line
        print()

    for i in range(n // 2, 0, -1):
        # Print leading spaces
        for j in range(n // 2, i, -1):
            print(" ", end="")

        # Print decreasing numbers
        for j in range(1, 2 * i):
            print(j, end="")

        # Move to the next line
        print()

if __name__ == "__main__":
    try:
        n = int(input("Enter the number of rows for the diamond pattern: "))
        print_diamond_pattern(n)
    except ValueError:
        print("Please enter a valid numeric input.")


# In[11]:


import random

def guessing_game():
    # Generate a random number between 1 and 100 (inclusive)
    secret_number = random.randint(1, 100)
    attempts = 0

    print("Welcome to the Guessing Game!")
    print("I'm thinking of a number between 1 and 100. Try to guess it.")

    while True:
        try:
            user_guess = int(input("Enter your guess: "))
            attempts += 1

            if user_guess < secret_number:
                print("Too low! Try again.")
            elif user_guess > secret_number:
                print("Too high! Try again.")
            else:
                print(f"Congratulations! You guessed the number {secret_number} correctly in {attempts} attempts.")
                break
        except ValueError:
            print("Invalid input. Please enter a numeric guess.")

if __name__ == "__main__":
    guessing_game()


# In[12]:


'''9. Write a Python program that checks the strength of a password entered by a user. The
program should assess the password based on criteria like length, use of uppercase and
lowercase letters, digits, and special characters. Use control structures and arrays to
provide a detailed evaluation.'''

import string

def check_password_strength(password):
    # Criteria for password strength
    length_requirement = 8
    has_uppercase = False
    has_lowercase = False
    has_digit = False
    has_special_character = False
    special_characters = "!@#$%^&*()_+-=[]{}|;:'\"<>,.?/\\"

    # Check password length
    if len(password) >= length_requirement:
        for char in password:
            if char.isupper():
                has_uppercase = True
            elif char.islower():
                has_lowercase = True
            elif char.isdigit():
                has_digit = True
            elif char in special_characters:
                has_special_character = True

    # Evaluate and provide feedback
    if (has_uppercase and has_lowercase and has_digit and has_special_character):
        return "Strong password!"
    else:
        feedback = "Weak password. Consider the following:\n"
        if not has_uppercase:
            feedback += "Include uppercase letters.\n"
        if not has_lowercase:
            feedback += "Include lowercase letters.\n"
        if not has_digit:
            feedback += "Include digits.\n"
        if not has_special_character:
            feedback += f"Include special characters from this list: {special_characters}\n"
        if len(password) < length_requirement:
            feedback += f"Make the password at least {length_requirement} characters long."
        return feedback

if __name__ == "__main__":
    password = input("Enter your password: ")
    strength = check_password_strength(password)
    print(strength)


# In[13]:


'''10. Write a Python program that generates the Fibonacci sequence up to a specified number
of terms using a loop and stores it in an array.'''
def generate_fibonacci_sequence(n):
    
    fibonacci_sequence = []

   
    a, b = 0, 1

   
    for _ in range(n):
        
        fibonacci_sequence.append(a)

        
        a, b = b, a + b

    return fibonacci_sequence

if __name__ == "__main__":
    try:
        n = int(input("Enter the number of Fibonacci terms to generate: "))
        if n <= 0:
            print("Please enter a positive integer.")
        else:
            fibonacci_sequence = generate_fibonacci_sequence(n)
            print("Fibonacci sequence:")
            print(fibonacci_sequence)
    except ValueError:
        print("Please enter a valid numeric input.")


# In[ ]:




