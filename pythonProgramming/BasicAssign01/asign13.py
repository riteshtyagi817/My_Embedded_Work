num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
num3 = int(input("Enter third number: "))

if num1 > num2 and num1 > num3:
    result = num1
elif num2 > num1 and num2 > num3:
    result = num2
else:
    result = num3

print("The largest number is {0}.".format(result))
