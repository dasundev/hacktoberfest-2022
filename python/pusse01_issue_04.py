# program to find largest number in arr[] of size n
from functools import reduce
lst = []
# number of elements as input
n = int(input("Enter number of elements : "))
# iterating till the range
for i in range(0, n):
    ele = int(input())
    lst.append(ele)
print("Original List: ", lst)
ans = reduce(max, lst)
print("Largest in given array ", ans)