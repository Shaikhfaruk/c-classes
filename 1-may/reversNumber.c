// revers number
#include <stdio.h>

int main()
{
    int num, temp, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    printf("Reverse of %d is %d\n", num, rev);

    return 0;
}
