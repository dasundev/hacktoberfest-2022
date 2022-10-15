#This program will return 'odd' for odd numbers and 'even' for even numbers, 'number is zero' will be returened for input 0

number = int(input("Please enter the number : "))
print("number is zero") if number == 0 else (print("odd") if number % 2 == 1 else print('even'))
