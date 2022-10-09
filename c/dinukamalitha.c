#include <stdio.h>
int main(){
	//Is the Number Even or Odd? #10
	
	int num;
	printf("Enter a Number:");
	scanf("%d", &num);
	
	if(num%2==0){
		printf("This is an Even Number");
	}
	else{
		printf("This is an Odd Number");
	}
	
	
	//Sum of the Odd Numbers #13
	
	int i, sum = 0;
	
	for(i=1; i<11; i++){
		if(i%2 == 1){
			sum += i;
		}
	}
	printf("Sum = %d", sum);
	
	
	
	
	return 0;
}


