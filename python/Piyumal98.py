# volume of a cone
"""height = int(input("Enter the height of the cone : "))
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


# Create a function that takes in a year and returns the correct century
def find_century(year):
   
    if (year <= 0):
        print("0 and negative is not allow for a year")
    
    elif (year <= 100):
        print("1st century")
    elif (year % 100 == 0):
        print(year // 100,"century")
    else:
        print(year // 100 + 1,"century")

year = int(input("Enter a year : "))
find_century(year)"""


# Convert Yen to USD
def display_menu():
  print("1. Convert Yen to USD")
  print("2. Exit")
  
def Yen_to_USD(value):
  return value*0.0069

while True:
  display_menu()
  choice=int(input())
  if choice==2:
    print("Bye!")
    break
  else:
    amount=float(input("Enter an amount in Yen: "))
    if choice==1:
      print(amount,"Yen is",Yen_to_USD(amount),"USD")