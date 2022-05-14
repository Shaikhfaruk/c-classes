// find the factorial of a number
#include <stdio.h>

int main()
{
    int num, i, factorial = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    i = 1;
    while (i <= num)
    {
        factorial = factorial * i;
        i++;
    }
    printf("Factorial of %d is %d", num, factorial);

    return 0;
}
