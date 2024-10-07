num = int(input("Enter the number to find factorial: "))

result = 1
for num in range(1,num+1):
    result *= num

print("The factorial of {0} is {1}".format(num, result))
