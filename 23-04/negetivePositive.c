// check whether the number is positive or negetive or zero
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a > 0)
        printf("%d is positive", a);
    else if (a < 0)
        printf("%d is negetive", a);
    else
        printf("%d is zero", a);
    return 0;
}
