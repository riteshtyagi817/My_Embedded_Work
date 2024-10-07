def check_prime(num):
    if num == 1:
        return False
    upperLimit = num//2 + 1;
    for value in range(2,upperLimit):
        if num % value == 0:
            return False
    else:
        return True

start = int(input("Enter the start of the range to check prime number: "))
end = int(input("Enter the end of the range to check prime number: "))

for num in range(start , end+1):
    if (check_prime(num)):
        print("{0} is a prime number".format(num))
    else: 
        print("{0} is not a prime number".format(num))
