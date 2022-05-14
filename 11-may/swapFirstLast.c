// swap first and last digit of a number using while loop
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, first, last, temp;
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
    temp = first;
    first = last;
    last = temp;
    printf("\nSwapped first and last digit: %d", first * 10 + last);

    return 0;
}
