// find sum of first and last digit of a number using while loop
#include <stdio.h>

int main()
{
    int num, first, last, sum;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10; // last digit
    while (num >= 10)
    {
        num = num / 10; // core logic
    }

    first = num % 10;
    printf("\nFirst digit: %d", first);
    printf("\nLast digit: %d", last);
    sum = first + last;
    printf("\nSum of first and last digit: %d", sum);

    return 0;
}
