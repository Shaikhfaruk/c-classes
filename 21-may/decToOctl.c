// convert decimal to octal using while loop
#include <stdio.h>

int main()
{
    int dec, octal = 0, i = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);

    while (dec != 0)
    {
        octal += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    printf("octal equivalent is: %d", octal);

    return 0;
}
