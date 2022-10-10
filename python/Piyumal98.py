# volume of a cone
height = int(input("Enter the height of the cone : "))
radius = int(input("Enter the radius of the cone : "))
pie = 3.14285714286 

volume = pie*(radius*radius)*height/3
print("volume of the cone = "+str(volume))


# Find the Highest Integer in the Array Using Recursion
def findMaxRec(A, n):
    if (n == 1):
        return A[0]
    return max(A[n - 1], findMaxRec(A, n - 1))

if __name__ == "__main__":
     
    A = []
    num = int(input("Enter number of elements : "))
    for i in range(0, num):
        ele = int(input())
        A.append(ele)

    n = len(A)
    print("Highest integer is : "+str(findMaxRec(A, n)))