// Access | Type | Format | Conversion Specifiers
// A short integer using %u

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two number: ");
    scanf("%u %u", &a, &b);
    c = a + b;
    printf("%u\n", c);

    return 0;
}
