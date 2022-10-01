#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number  ");
    scanf("%d",&x);
    
    int high;
    printf("Enter highest value of the range");
    scanf("%d",&high);
    
    int low;
    printf("Enter lowest value of the range");
    scanf("%d",&low);
    
    if(low < x && x < high)
      {
          printf("The Number is within a Given Range");
      }
      else
      {
           printf("The Number is not within a Given Range");
      }
    return 0;
}
