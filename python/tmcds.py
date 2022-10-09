# 13 - Sum Of Odds
number = int(input("Enter a number: "))
sum =0
for number in range(1,number+1):
    if (number%2!=0):
        sum += number
print("The sum is", sum)

