//issue - sum of the odd numbers

#include<stdio.h>  
  
// int main()  
// {  
//     int num, count = 1, sum = 0;  
  
//     printf("Enter a integer number\n");  
//     scanf("%d", &num);  
  
//     while(count <= num)  
//     {  
//         if(count%2 != 0)  
//         {  
//             sum = sum + count;  
//         }  
//         count++;  
//     }  
  
//     printf("Sum of ODD integer number is %d\n", sum);  
  
//     return 0;  
// }

//===============================================================================

//issue - Is the Number Even or Odd?

#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}