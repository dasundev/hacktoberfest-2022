#Find the Smallest and Biggest Numbers

def Smallest_and_biggest_number():

    numlist = []
    number = int(input("Please enter the total numbers of list."))
    for i in range(1, number+1):
        value = int(input("Please enter the value of %d element :" %i))
        numlist.append(value)
    
    print("Smallest number is : ",min(numlist))
    print("Biggest number is : ",max(numlist))
    
Smallest_and_biggest_number()