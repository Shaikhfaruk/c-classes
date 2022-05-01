// find the diffrence between alphabets and characters.
#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
    {
        printf("%c is an alphabet\n", c);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("%c is an alphabet\n", c);
    }
    else
    {
        printf("%c is not an alphabet\n", c);
    }
    return 0;
}
