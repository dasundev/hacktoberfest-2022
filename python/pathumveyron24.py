#Find the Highest Integer in the Array Using Recursion #25

def highest_integer(arr):
    if len(arr) == 1:
        return arr[0]
    else:
        return max(arr[0], highest_integer(arr[1:]))

arr = [3, 2, 14, 26, 8, 32, 46, 24]
print("Highest Integer of Array is: ", highest_integer(arr))