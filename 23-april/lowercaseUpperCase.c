// check whether a character is lowercase or uppercase
#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
        printf("%c is lowercase\n", c);
    else if (c >= 'A' && c <= 'Z')
        printf("%c is uppercase\n", c);
    else
        printf("%c is not a letter\n", c);
    return 0;
}
