// Access | Type | Format | Conversion Specifiers
// Large number of Floating point integer using %lf

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two number: ");
    scanf("%lf %lf", &a, &b);
    c = a + b;
    printf("%lf\n", c);

    return 0;
}
