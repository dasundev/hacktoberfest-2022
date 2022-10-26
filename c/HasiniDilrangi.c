#include <stdio.h>

int main()
{
    int i, n, sum=0;

    /* Input range to find sum of odd numbers */
    printf("Enter upper limit: ");
    scanf("%d", &n);

    /* Find the sum of all odd number */
    for(i=1; i<=n; i+=2)
    {
        sum += i;
    }

    printf("Sum of odd numbers = %d", sum);

    return 0;
}
