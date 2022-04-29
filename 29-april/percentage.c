// percetnage
#include <stdio.h>

int main()
{
    int a, perc, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a percentage: ");
    scanf("%d", &perc);
    b = a * perc / 100;
    printf("%d%% of %d is %d\n", perc, a, b);

    return 0;
}
