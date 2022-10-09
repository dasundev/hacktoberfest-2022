#Find the Largest Number in an Array 
from array import *
arraySize = int(input("Enter the size of Array : "))
arr=array("i",[])
for x in range(arraySize):
    print(f"Input {x +1} value of Array  ")
    y=int(input( ":" ))
    arr.append(y)

ln = arr[0]
for y in range(arraySize):
       if ln <=arr[y]:
            ln =arr[y]
    
print("Largest number of the array is : ", ln)

     