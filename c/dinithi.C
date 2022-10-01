// Find Sum of Odd Numbers
#include <stdio.h>
int main(){
    int num, sum = 0;
    
    // add Input
    printf("Enter the max value: ");
    scanf("%d", &num);
    
    printf("Odd Numbers Between 0 To %d are: \n", num);
    for (int i = 1; i <= num; i++ ){
        if (i % 2 != 0){
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    printf("Sum of Odd Numbers From 0 To %d is %d.", num, sum);
    return 0;
}
