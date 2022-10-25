#checking number odd or even #1

num = int(input("Enter a number: "));
mod = num % 2
if mod > 0:
    print("This is an odd number.");
else:
    print("This is an even number.");


#finding sum of numbers in an array #2
    
arr = [5, 9, 3, 4, 5];     
sum = 0;    
     
#Loop through the array to calculate sum of elements    
for i in range(0, len(arr)):    
   sum = sum + arr[i];    
     
print("Sum of all the numbers of the array: " + str(sum)); 
