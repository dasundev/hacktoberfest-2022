#Sum of Numbers in an Array
def _sum(arr):
 
    sum = 0
 
    for i in arr:
        sum = sum + i
 
    return(sum)
 
arr = []

arr = [12, 3, 4, 15]

n = len(arr)
 
ans = _sum(arr)
 
print('Sum of the array is ', ans)

#Find the Largest Number in an Array
def largest(arr, n):
 
   
    max = arr[0]
 
    for i in range(1, n):
        if arr[i] > max:
            max = arr[i]
    return max
 
arr = [10, 35, 45, 90, 125]
n = len(arr)
Ans = largest(arr, n)
print("Largest in given array ", Ans)