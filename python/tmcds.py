#14 Sum of Number in an Array
from array import *
arraySize = int(input("Enter the size of Array : "))
arr=array("i",[])
sum=0
for x in range(arraySize):
    print(f"Input {x +1} value of Array  ")
    y=int(input( ":" ))
    arr.append(y)
    sum+=arr[x]
print("Sum of the array is : ", sum)

     