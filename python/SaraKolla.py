#  Is the Number Even or Odd?
# I'm SaraKolla

def oddfinder(num1):
    if num1 % 2 == 0:
        return "It Is Odd"
    else:
        return "It Is Even"


inpuntodd = float(input("Enter Number :"))

print(oddfinder(inpuntodd))
