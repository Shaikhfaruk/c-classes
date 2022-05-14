// print natural numbers in reverse order using while loop
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    i = n;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }

    return 0;
}
