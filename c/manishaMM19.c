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
    return 0;

   

}
