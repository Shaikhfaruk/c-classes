// Access | Type | Format | Conversion Specifiers
// A decimal integer using %d

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("%d\n", c);

    return 0;
}
