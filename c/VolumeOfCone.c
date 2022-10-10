#include <stdio.h>

int main()
{
    int height;
    printf("Enter height :");
    scanf("%d",&height);
    
    int radius;
    printf("Enter radius :");
    scanf("%d",&radius);
     
      
    float volume=(float)((22*radius*radius*height)/(7*3));
      
      
    printf("Volume of a cone %f" ,volume);
      
}