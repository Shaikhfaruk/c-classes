// check whether a character is a vowel or a consonant using a switch statement
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("\nthis is a Vowel\n");
        break;
    default:
        printf("\nthis is a Consonant\n");
        break;
    }

    return 0;
}
