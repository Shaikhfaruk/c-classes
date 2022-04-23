#include <stdio.h>

// define PI
#define PI 3.14

// define Global Variable
int s;

int main()
{
    int a, b;

    a = 10;
    b = 20;

    s = a + b;

    printf("The sum of %d and %d is %d\n", a, b, s);
    printf("The value of PI is %f\n", PI);

    return 0;
}
