leap_year = int(input("Enter the year to check: "))

if leap_year % 4 == 0:
    if leap_year % 100 == 0:
        if leap_year % 400 == 0:
            print("{0} is a leap year".format(leap_year))
        else:
            print("{0} is not a leap year".format(leap_year))
    else:
            print("{0} is a leap year".format(leap_year))
else:
    print("{0} is not a leap year".format(leap_year))
