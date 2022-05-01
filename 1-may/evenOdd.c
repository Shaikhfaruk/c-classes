// even odd by using ternary operator

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // ternary operator
    (a % 2 == 0) ? printf("%d is even\n", a) : printf("%d is odd\n", a);
    (b % 2 == 0) ? printf("%d is even\n", b) : printf("%d is odd\n", b);

    return 0;
}
