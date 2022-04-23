// check weather the number is vowel or consonant or not
#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        printf("%c is a vowel", a);
    else
        printf("%c is a consonant", a);

    return 0;
}