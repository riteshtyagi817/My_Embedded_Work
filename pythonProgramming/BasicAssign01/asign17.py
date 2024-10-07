num = int(input("Enter the no to find the multiplication table: "))
end = int(input("Enter the end range for mutiplation table: eg(10): "))

for value in range(1,end+1):
    print("{0} * {1} = {2}".format(num,value,num*value))

