num = int(input("Enter a number: "))

if num == 1:
    print("{0} is not a prime number.".format(num))
else:
    upperLimit = num//2 + 1;
    for value in range(2,upperLimit):
        if num % value == 0:
            print("{0} is not a prime number.".format(num))
            break
    else:
        print("{0} is a prime number.".format(num))

