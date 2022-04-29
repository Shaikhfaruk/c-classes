// Access | Type | Format | Conversion Specifiers
// Floating integer using %g

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two number: ");
    scanf("%g %g", &a, &b);
    c = a + b;
    printf("%g\n", c);

    return 0;
}
