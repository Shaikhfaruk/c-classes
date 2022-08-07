// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                printf("true");
                break;
            }
            else
            {
                printf("%d ", arr[i]);
                printf("false");
            }
        }
    }

    return 0;
}
