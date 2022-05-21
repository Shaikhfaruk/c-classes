// check given number is prime or not using while loop

#include <stdio.h>

int main()
{
    int num = 10, i;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    i = 2;

    while (i <= num / 2)
    {
        // printf("%d current value of num\n", num);
        if (num % i == 0)
        {
            printf("%d is not a prime number\n", num);
            break;
        }
        i++;
    }
    // printf("%d is a prime number\n", i);
    if (i > num / 2)
    {
        // printf("%d is not a prime number\n", num);
        printf("%d is a prime number\n", num);
    }

    return 0;                                                                            
}
// Output

// Enter number : 55
// 55 is not a prime number
