# Program to find the largest number in an array
# Input the numbers of the array seperate by a space

print("Enter numbers seperated by a space:")
num_input = input()
num_list = [int(x) for x in num_input.split(" ")] # Take input string and convert to list of numbers

max_no = max(num_list) # Largest number
max_index = num_list.index(max_no) # Index of largest number

print(f"The largest number in the array is {max_no} in the index position {max_index}")