#checking number odd or even #1

num = int(input("Enter a number: "));
mod = num % 2
if mod > 0:
    print("This is an odd number.");
else:
    print("This is an even number.");


#finding sum of numbers in an array #2
    
arr = [2, 9, 3, 4, 6];     
sum = 0;    
     
#Loop through the array to calculate sum of elements    
for i in range(0, len(arr)):    
   sum = sum + arr[i];    
     
print("Sum of all the elements of an array: " + str(sum)); 


#finding largest in an array #3

#Initialize array     
arr = [25, 11, 7, 113, 56];     
         
#Initialize max with first element of array.    
max = arr[0];    
         
#Loop through the array    
for i in range(0, len(arr)):    
    #Compare elements of array with max    
    if(arr[i] > max):    
        max = arr[i];    
               
print("Largest element present in given array: " + str(max));   
