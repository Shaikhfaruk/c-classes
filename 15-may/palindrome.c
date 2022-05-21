// palindrome checker using for loop
#include <stdio.h>

int main()
{
    int i, j, n, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = n, j = 0; i > 0; i /= 10, j++)
    {
        if (i % 10 != n % (int)pow(10, j))
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is a palindrome number\n", n);
    }
    else
    {
        printf("%d is not a palindrome number\n", n);
    }

    return 0;
}
