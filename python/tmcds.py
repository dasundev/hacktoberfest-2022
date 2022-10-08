#10 - Is the Number Even or Odd? #10
# num = int(input("Enter a number: "))
# if (num%2)==0:
#     print("The number you entered is an Even number")
# else: print("The number you entered is an Odd number")

# 13 - Sum Of Odds

import numbers


number = int(input("Enter a number: "))
sum =0
for number in range(1,number+1):
    if (number%2!=0):
        sum += number
print("The sum is", sum)    