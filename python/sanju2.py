# Sum of the Odd Numbers #13

maxvalue = int(input("maxvalue Value - "))
Oddtotal = 0

for number in range(1, maxvalue+1):
    if (number % 2 != 0):
        print("{0}".format(number))
        Oddtotal = Oddtotal + number

print("The Sum of Odd Numbers from 1 to {0} = {1}".format(number, Oddtotal))
