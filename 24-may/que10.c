// Question 10 Write a programe for insertion and deletion of n item from the queue.
#include <stdio.h>

int main()
{
    int n, i, j, r, q, s;
    printf("Enter the number of elements in the queue\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the queue\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be inserted\n");
    scanf("%d", &q);
    printf("Enter the position to be inserted\n");
    scanf("%d", &r);
    for (i = n - 1; i >= r; i--)
    {
        a[i + 1] = a[i];
    }

    a[r] = q;
    printf("The elements in the queue after insertion are\n");
    for (i = 0; i < n + 1; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("Enter the element to be deleted\n");
    scanf("%d", &s);
    for (i = 0; i < n; i++)
    {
        if (a[i] == s)
        {
            for (j = i; j < n; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
        }
    }
    printf("The elements in the queue after deletion are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}

// Output:

// Enter the number of elements in the queue
// 5
// Enter the elements in the queue
// 2
// 3
// 5
// 4
// 1
// Enter the element to be inserted
// 2
// Enter the position to be inserted
// 2
// The elements in the queue after insertion are
// 2
// 3
// 2
// 5
// 4
// 1
// Enter the element to be deleted
// 2
// The elements in the queue after deletion are
// 3
// 5
// 4