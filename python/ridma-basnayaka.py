# This is a python program which calculates the volume of a cone.   
# It is a function to calculate the volume of cone  
import math  
pi = math.pi  
  
def find_Volume_of_cone(r,h):  
    return (pi *  r * r * h ) / 3 # It is a formula which calculates the value of volume.   
  
radius = 5  
height = 10  
print(find_Volume_of_cone(radius, height))  