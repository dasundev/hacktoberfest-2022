#include <stdio.h>
int main(){
     
    //Count Ones in a 2D Array
      int count=0;
     int num[2][3]= {{1,3,1},{2,1,7}};
     for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            if(num[i][j]==1){
                count ++;
            }
        }
     }
     printf("%d",count);

     //Sum of odd numbers
      int max, sum = 0;
    printf("Enter the maximum value: ");
    scanf("%d", &max);

    for (int i = 1; i <= max; i++ ){
        if (i % 2 != 0){
            sum = sum + i;
        }
    }
    printf("Sum of Odd Numbers between 0 and %d = %d", max, sum);
    return 0;

   

}
