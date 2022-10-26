#include <stdio.h>

int main() {
	int x;
	printf("\nInput an integer: "); 
	scanf("%d", &x);
	if(x >=0 && x <= 20) 
	{
		printf("Range [0, 20]\n");
	} 
	else if(x >=21 && x <= 40) 
	{
		printf("Range (25,50]\n");
	} 
	else if(x >=41 && x <= 60) 
	{
		printf("Range (50,75]\n");
	} 
	else if(x >61 && x <= 80) {
		
		printf("Range (61,80]\n");
	} 
	else 
	{
	printf("Outside the range\n");
	}	
	return 0;
}
