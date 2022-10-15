#This program will return 'odd' for odd numbers and 'even' for even numbers, 'number is zero' will be returened for input 0

number = int(input("Please enter the number : "))
print("number is zero") if number == 0 else (print("odd") if number % 2 == 1 else print('even'))

#------------------------------------------------------------------------------------------------------------------------------
#This program will return '0' for string 'zero'  and '1' for string 'one'

inputString = input("Please enter your string ( 'zero' or 'one' ) : ")

inputStringToLower = inputString.lower()

if(inputStringToLower == "one"):
    print(1)
elif(inputStringToLower == "zero"):
    print(0)
else:
    print("Invalid string, please enter 'Zero' or 'One")