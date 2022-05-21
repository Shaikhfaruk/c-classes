// output must be

// 0 0 0
// 1 2 3
// 2 4 6
// 3 6 9
// 4 8 12

#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < 10, k < 5, j < 8; i++)
    {
        printf("%d %d %d\n", i, j, k);
        j += 2;
        k += 3;
    }
    return 0;
}
