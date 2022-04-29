// check weather character is alphabet or not
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
        printf("%c is alphabet", ch);
    else if (ch >= 'A' && ch <= 'Z')
        printf("%c is alphabet", ch);
    else
        printf("%c is not alphabet", ch);
    return 0;
}
