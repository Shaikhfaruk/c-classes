// Access | Type | Format | Conversion Specifiers
// A short integer using %h
// Problem with %h specifier:

#include <stdio.h>

int main()
{
    short int a, b, c;
    printf("Enter two number: ");
    scanf("%h %h", &a, &b);

    c = a + b;
    printf("%h\n", c);
    return 0;
}