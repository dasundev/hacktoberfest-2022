# This is a python program which calculates the volume_Of_a_cone.   
 
import math  
pi = math.pi  
  
def find_Volume_of_cone(r,h):  
    return (pi *  r * r * h ) / 3 # It is a formula which calculates the value of volume.   
  
radius = 8  
height = 10  
print(find_Volume_of_cone(radius, height))  
