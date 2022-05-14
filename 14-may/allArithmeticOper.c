// write a program to enter two numbers and perform all arithmetic operations on them.
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nAddition: %d", a + b);
    printf("\nSubtraction: %d", a - b);
    printf("\nMultiplication: %d", a * b);
    printf("\nDivision: %d", a / b);
    printf("\nModulus: %d", a % b);

    return 0;
}
