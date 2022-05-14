// calculate the product of the digits of a number
#include <stdio.h>

int main()
{
    int num, product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        product = product * (num % 10);
        num = num / 10;
    }
    printf("\nProduct of digits: %d", product);

    return 0;
}
