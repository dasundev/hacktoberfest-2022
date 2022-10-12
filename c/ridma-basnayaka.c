// Volume of a Cone 23 using c
// This C program which uses a function to calculate the volume of a cone.  
#include <stdio.h>  
#define pi 3.14  
float find_Volume_of_cone(float r, float h) // It is a function to find volume   
{   
float Volume_of_cone;  
Volume_of_cone= (pi *  r * r * h) / 3 ;   
// It is a formula for calculating a volume of cone   
return (Volume_of_cone);   
}   
float main()   
{   
float r;   
float h;  
printf("Enter the radius of the cone:");   
scanf("%f",&r);  
printf("Enter the height of the cone:");   
scanf("%f",&h);  
float x = find_Volume_of_cone(r,h);  
printf("Volume of the cone is: %f",x);     
return 0;   
}  
