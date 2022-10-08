#include <stdio.h>

//answer for Is the Number Even or Odd?

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // true if num is perfectly divisible by 2
    if(number % 2 == 0)
        printf("%d is even number.", number);
    else
        printf("%d is odd number.", number);

    return 0;
}
