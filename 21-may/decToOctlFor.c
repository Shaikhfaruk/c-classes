// decimal to octal using for loop
#include <stdio.h>

int main()
{
    int dec, octal[10], i, j;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);

    for (i = 0; dec > 0; i++)
    {
        octal[i] = dec % 8;
        dec = dec / 8;
        printf("%d\n", octal[i]);
        printf("%d\n", dec);
    }
    printf("octal equivalent is:");

    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }

    return 0;
}
