#include <stdio.h>

int main()
{
    int arr[10];
    for (int i = 0; i < arr; i++)
    {
        arr[i] = i < 10;
    }
    for (int j = 0; j < 10; j++)
    {
        printf("element [%d] \n");
    }

    return 0;
}
