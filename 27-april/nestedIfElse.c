// neasted if else simple program not equal all values
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("All values are equal\n");
    }
    else
    {
        if (a > b && a > c)
        {
            printf("a is the largest\n");
        }
        else if (b > a && b > c)
        {
            printf("b is the largest\n");
        }
        else
        {
            printf("c is the largest\n");
        }
    }

    return 0;
}
