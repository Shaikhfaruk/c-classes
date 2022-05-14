// Print sum of n natural numbers using while loop
#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        sum = sum + i; // core logic
        i++;
    }
    printf("\nSum of natural numbers: %d", sum);

    return 0;
}
