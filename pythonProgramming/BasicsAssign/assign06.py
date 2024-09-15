a = int(input("Enter the value of a: "))
b = int(input("Enter the value of b: "))
c = int(input("Enter the value of c: "))

d = (b*b - (4*a*c))
if d > 0:
    first = (-b + (d**0.5))/(2*a)
    second = (-b - (d**0.5))/(2*a)
    print("The solutions are {0} and {1} " .format(first,second))
elif d == 0:
    first = (-b + (d**0.5))/(2*a)
    second = (-b - (d**0.5))/(2*a)
    print("The solutions are {0} and {1} " .format(first,second))
else:
    print("real solutions are not possible.")

