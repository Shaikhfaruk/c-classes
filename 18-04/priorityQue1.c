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
    scanf("%d", &g);
    printf("Enter a number for h: ");
    scanf("%d", &h);
    printf("Enter a number for k: ");
    scanf("%d", &k);

    // answer = a - b + c / d == e / f - g + h % k;
    // printf("%lf\n", answer);

    if (a > b && a > c && a > d && a > e && a > f && a > g && a > h && a > k)
    {
        printf("%d is the largest number\n", a);
    }
    else if (b > a && b > c && b > d && b > e && b > f && b > g && b > h && b > k)
    {
        printf("%d is the largest number\n", b);
    }
    else if (c > a && c > b && c > d && c > e && c > f && c > g && c > h && c > k)
    {
        printf("%d is the largest number\n", c);
    }
    else if (d > a && d > b && d > c && d > e && d > f && d > g && d > h && d > k)
    {
        printf("%d is the largest number\n", d);
    }
    else if (e > a && e > b && e > c && e > d && e > f && e > g && e > h && e > k)
    {
        printf("%d is the largest number\n", e);
    }
    else if (f > a && f > b && f > c && f > d && f > e && f > g && f > h && f > k)
    {
        printf("%d is the largest number\n", f);
    }
    else if (g > a && g > b && g > c && g > d && g > e && g > f && g > h && g > k)
    {
        printf("%d is the largest number\n", g);
    }
    else if (h > a && h > b && h > c && h > d && h > e && h > f && h > g && h > k)
    {
        printf("%d is the largest number\n", h);
    }
    else if (k > a && k > b && k > c && k > d && k > e && k > f && k > g && k > h)
    {
        printf("%d is the largest number\n", k);
    }
    else
    {
        printf("All numbers are equal\n");
    }

    return 0;
}