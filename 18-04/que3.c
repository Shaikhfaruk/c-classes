// Precedence level
#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, k;
    double answer;

    printf("Enter a number for a: ");
    scanf("%d", &a);
    printf("Enter a number for b: ");
    scanf("%d", &b);
    printf("Enter a number for c: ");
    scanf("%d", &c);
    printf("Enter a number for d: ");
    scanf("%d", &d);
    printf("Enter a number for e: ");
    scanf("%d", &e);
    printf("Enter a number for f: ");
    scanf("%d", &f);
    printf("Enter a number for g: ");

    answer = a * b - c / d < e + f;
    printf("%lf\n", answer);

    return 0;
}