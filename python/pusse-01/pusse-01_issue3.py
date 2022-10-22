# removing duplicate elements from the list
lst = []
# number of elements as input
n = int(input("Enter number of elements : "))
# iterating till the range
for i in range(0, n):
    ele = (input())
    lst.append(ele)
print("Original List: ", lst)
res = [*set(lst)]
print("List after removing duplicate elements: ", res)