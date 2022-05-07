// find maximum between two numbers using switch statement
#include <stdio.h>

int main()
{
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    switch (a > b)
    {
    case 1:
        max = a;
        break;
    case 0:
        max = b;
        break;
    default:
        max = a;
        break;
    }
    printf("Maximum is: %d", max);

    return 0;
}
