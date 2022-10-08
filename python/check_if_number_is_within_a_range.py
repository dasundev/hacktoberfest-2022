#check if number is within a given range
    
num1 = float(input('Enter the lowest number in the range : '))

num2 = float(input('Enter the highest number in the range : '))

num3 = float(input('Enter the number : '))

if num1<num3 and num2>num3:
    print(num3,' is within the range')
else:
    print(num3,' is not within the range')

