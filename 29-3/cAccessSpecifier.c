// Access | Type | Format | Conversion Specifiers
// A short integer using %c

#include <stdio.h>

int main()
{
    char a, b, c;
    printf("Enter two number: ");
    scanf("%c %c", &a, &b);
    c = a + b;
    printf("%c\n", c);

    return 0;
}
