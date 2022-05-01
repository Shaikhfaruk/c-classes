// revers string
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int i, j;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        str[i] ^= str[j];
        str[j] ^= str[i];
        str[i] ^= str[j];
    }
    printf("Reversed string is %s\n", str);

    return 0;
}
