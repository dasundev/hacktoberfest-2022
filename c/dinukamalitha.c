//Is the Number Even or Odd? #10

#include <stdio.h>
int main(){
	
	int num;
	printf("Enter a Number:");
	scanf("%d", &num);
	
	if(num%2==0){
		printf("This is an Even Number");
	}
	else{
		printf("This is an Odd Number");
	}
	return 0;
}
