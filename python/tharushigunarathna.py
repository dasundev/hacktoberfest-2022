#Is the Number Even or Odd?
num = int (input (“Enter a number: “)

if (num % 2) == 0:

              print (“The entered number is even”)

else:

              print (“The entered number is odd”)

#Sum of the Odd Numbers				
num =int(input("Enter n value:"))
sum = 0
for i in range(1,n+1,2):
    sum+=i
print(sum)
           
#How Many Vowels? 
FindingVowels = input("Please type a sentence: ")
print(*map(FindingVowels.lower().count, "aeiou"))

#Find the Largest Number in an Array 
def largest(array, n):
 
    max = array[0]
 
    for i in range(1, n):
        if array[i] > max:
            max = array[i]
    return max
 
 

array = [10, 324, 45, 90, 9808]
n = len(array)
Answer = largest(array, n)
print("Largest in given array ", Answer)



