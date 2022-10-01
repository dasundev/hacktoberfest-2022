#include <stdio.h>

int main()
{
    int length;
    printf("Enter length  ");
    scanf("%d",&length);
    
    int width;
    printf("Enter width ");
    scanf("%d",&width);
    
    int area=length*width;
    printf("Area of rectangle is %d",area);
    return 0;
}
