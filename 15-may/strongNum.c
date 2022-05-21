// strong number is a number that is the sum of the factorial of its digits.
// For example, 145 is a strong number because 1! + 4! + 5! = 1 + 24 + 120 = 145.
// Write a program to find all strong numbers in a given range.
#include <stdio.h>

int main()
{
    int i, j, k, sum;
    printf("Enter the range: ");
    scanf("%d", &i);

    for (j = 0; j <= i; j++)
    {
        sum = 0;
        for (k = 1; k <= j; k++)
        {
            sum += k * (j / k);
        }
        if (sum == j)
        {
            printf("%d\n", j);
        }
    }

        return 0;
}
