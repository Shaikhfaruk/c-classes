// Access | Type | Format | Conversion Specifiers
// A decimal, octal, or hexadecimal integer using %i

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two number: ");
    scanf("%i %i", &a, &b);
    c = a + b;
    printf("%i\n", c);

    return 0;
}
