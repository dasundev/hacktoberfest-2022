// Volume of a Cone 23 using java
// This a Java program which calculates the volume of a cone.  
class findvolume {   
static float find_Volume_of_cone(float r, float h)   
{   
final float pi = (float) 3.141592653589793;   
float Volume_of_cone;  
Volume_of_cone=  (pi *  r * r * h) / 3 ; // It is a formula for calculating the volume of cone   
return(Volume_of_cone);   
}   
// Driver method   
public static void main(String[] args)   
{   
float radius = 5, h = 10;   
System.out.println("The Volume of a cone in Java:");  
System.out.println(find_Volume_of_cone(radius,h));   
}   
}  
