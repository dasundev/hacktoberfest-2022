#include<stdio.h>
#include<conio.h>

void main()
{
 int rev=0;
 int rem,n;
 printf("Enter Number: ");
 scanf("%d",&n);
 while(n>0)
 {
  rem=n%10;
  rev=rev*10+rem;
  n=n/10;
 }
 printf("Reverse of the number: %d",rev);
 getch();
}
