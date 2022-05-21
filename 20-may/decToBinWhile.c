// decimal to binary
#include <stdio.h>

int main()
{
    int a[10], num, i, j; // a[10] is an array of 10 integers

    printf("Enter a number: ");
    scanf("%d", &num);

    i = 0; //
    while (num != 0)
    {
        a[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary equivalent: ");
    j = i - 1;
    while (j >= 0)
    {
        printf("%d", a[j]);
        j--;
    }
    printf("\n");

    return 0;
}
