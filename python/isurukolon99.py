#Sum of the Odd Numbers

def sum_of_the_odd_numbers():
    max = int(input("please enter the maximum value : "))
    Oddtotal = 0

    for num in range(1, max + 1):
        if (num % 2!=0):
            print("{0}".format(num))
            Oddtotal = Oddtotal + num
        
    print("Sum of odd numbers from 1 to {0} = {1}".format(num, Oddtotal))
    
    
#Is the Number Even or Odd?

def Even_or_odd():
    num = int (input("Enter any number to test whether it is odd or even: "))
    if (num % 2) == 0:
        print("The number is even")
    else:
        print("The provided number is odd")
        
             

#Find the Smallest and Biggest Numbers

def Smallest_and_biggest_number():

    numlist = []
    number = int(input("Please enter the total numbers of list."))
    for i in range(1, number+1):
        value = int(input("Please enter the value of %d element :" %i))
        numlist.append(value)
    
    print("Smallest number is : ",min(numlist))
    print("Biggest number is : ",max(numlist))
    
    
#Find the Largest Number in an Array

def largest(arr, n):
     
    max = arr[0]
 
    for i in range(1, n):
        if arr[i] > max:
            max = arr[i]
    return max
 
arr = [10, 324, 45, 90, 9808]
n = len(arr)
Ans = largest(arr, n)
print("Largest in given array ", Ans)


sum_of_the_odd_numbers()
Even_or_odd()
Smallest_and_biggest_number()