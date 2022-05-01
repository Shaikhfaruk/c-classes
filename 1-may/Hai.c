#include <stdio.h>

int main()
{
    int i = 2;
    if (i == (1, 2))
    {
        printf("\nHai %d", i);
    }
    else
    {
        printf("\nNahi hai%d", i);
    }

    return 0;
}
