#include <stdio.h>

// define min and max

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main()
{

    printf("The Minimum Value between 50 and 20 is: %f\n", MIN(100.9, 200));

    return 0;
}
