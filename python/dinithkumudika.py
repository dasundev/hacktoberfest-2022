array = ["Honda","Mitsubishi","Ford","Porsche"]

def find_first_element():
     for item in array:
          if item[0]:
               return item
     
first_element = find_first_element()
print(first_element)