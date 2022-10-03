max = int(input("please enter the maximum value : "))
Oddtotal = 0

for num in range(1, max + 1):
    if (num % 2!=0):
        print("{0}".format(num))
        Oddtotal = Oddtotal + num
        
print("Sum of odd numbers from 1 to {0} = {1}".format(num, Oddtotal))
        