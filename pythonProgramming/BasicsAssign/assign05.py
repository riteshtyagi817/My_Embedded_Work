a = int(input("Enter the first side of the triangle: "))
b = int(input("Enter the second side of the triangle: "))
c = int(input("Enter the third side of the triangle: "))

s = (a+b+c)/2
area = (((s-a)*(s-b)*(s-c))**0.5)
print("The area of the triangle with sides {0},{1},{2} is {3:.3f} ".format(a,b,c, area))

