#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter a number: ");

    scanf("%d %d", &a, &b);

    c = sub(a, b);
    printf("%d - %d = %d\n", a, b, c);

    // sum(a, b);

    return 0;
}

int sum(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int div(int x, int y)
{
    return x / y;
}

int mul(int x, int y)
{
    return x * y;
}