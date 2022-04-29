// Access | Type | Format | Conversion Specifiers
// A short integer using %o

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two number: ");
    scanf("%o %o", &a, &b);
    c = a + b;
    printf("%o\n", c);

    return 0;
}
