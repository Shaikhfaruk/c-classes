// count the number of digits in a number
#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        num = num / 10; // core logic
        printf("%d\n", num);
        count++; // increment the count
    }
    printf("\nNumber of digits: %d", count);

    return 0;
}
