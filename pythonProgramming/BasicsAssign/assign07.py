import math
a = float(input("Enter the first number: "))
b = float(input("Enter the second number: "))

print("Before swapping numbers are {0} and {1} ".format(a,b))
temp = a
a = b
b = temp
print("After swapping numbers are {0} and {1} ".format(a,b))
