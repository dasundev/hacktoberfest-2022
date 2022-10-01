# function to find the smallest number and largest number in python
def number_analysis(lst):
    smallest_num=lst[0]
    largest_num=lst[0]
    for i in range(len(lst)):
        if lst[i]<smallest_num:
            smallest_num=lst[i]
        else:
            pass
        if lst[i]>largest_num:
            largest_num=lst[i]
        else:
            pass
    return f"Smallest Number = {smallest_num} and largest number = {largest_num}"

lst=[54, 32, 32, 51, 43,5,100]
print(number_analysis(lst))