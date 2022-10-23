max = int(input("please enter the maximum value : "))
Oddtotal = 0

for num in range(1, max + 1):
    if (num % 2!=0):
        print("{0}".format(num))
        Oddtotal = Oddtotal + num
        
print("Sum of odd numbers from 1 to {0} = {1}".format(num, Oddtotal))


"""num = int (input (“Enter any number to test whether it is odd or even: “)
if (num % 2) == 0:

              print ("The number is even")

else:

              print ("The provided number is odd")

Output:

Enter any number to test whether it is odd or even:

887

887 is odd. """

        
