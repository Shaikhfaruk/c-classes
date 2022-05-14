// print all natural numbers from 1 to n using while loop
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
