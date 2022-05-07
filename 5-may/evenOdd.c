// check whether a number is even or odd using a switch statement
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num % 2)
    {
    case 0:
        printf("\nthis is an Even number\n");
        break;
    default:
        printf("\nthis is an Odd number\n");
        break;
    }

    return 0;
}
