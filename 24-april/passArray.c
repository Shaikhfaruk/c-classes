// Program to pass an array to a function
#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};
    int c[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
