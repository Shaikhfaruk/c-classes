// calculate the sum of the digits of a number
#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    printf("\nSum of digits: %d", sum);

    return 0;
}
