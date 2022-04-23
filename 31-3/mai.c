#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a * a;
    printf("%d squared is %d\n", a, b);

    return 0;
}
