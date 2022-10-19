#include <stdio.h>

int main()
{
    int i, start, end, sum=0;

    /* Input range to find sum of odd numbers */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    /* If lower limit is even then make it odd */
    if(start % 2 == 0)
    {
        start++;
    }
    
    /* Iterate from start to end and find sum */
    for(i=start; i<=end; i+=2)
    {
        sum += i;
    }

    printf("Sum of odd numbers between %d to %d = %d", start, end, sum);

    return 0;
}