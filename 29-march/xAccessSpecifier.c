// Access | Type | Format | Conversion Specifiers
// A short integer using %x

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two number: ");
    scanf("%x %x", &a, &b);
    c = a + b;
    printf("%x\n", c);

    return 0;
}
