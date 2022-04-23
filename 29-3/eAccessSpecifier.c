// Access | Type | Format | Conversion Specifiers
// Floating integer using %e

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two number: ");
    scanf("%e %e", &a, &b);
    c = a + b;
    printf("%e\n", c);

    return 0;
}
