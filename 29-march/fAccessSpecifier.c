// Access | Type | Format | Conversion Specifiers
// Floating integer using %f

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two number: ");
    scanf("%f %f", &a, &b);
    c = a + b;
    printf("%f\n", c);

    return 0;
}
