// Program to accept two number and print largest among them.
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        c = a;
    else
        c = b;
    printf("Largest number is %d", c);

    return 0;
}
