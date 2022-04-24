// que 3 String manipulation function e.g sring copy, string concatenation, string comparison, lenght, reverse, substring

#include <stdio.h>
#include <string.h>
int strrev(char *str);
int strlen(char *str);
int strcmp(char *str1, char *str2);
int strcpy(char *str1, char *str2);
int strcat(char *str1, char *str2);
int strsub(char *str1, char *str2, int start, int end);

int main()
{
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];
    char str4[20];
    char str5[20];
    char str6[20];
    char str7[20];
    char str8[20];
    char str9[20];
    char str10[20];
    char str11[20];

    strcpy(str3, str1);
    strcpy(str4, str2);
    strcpy(str5, str1);

    strcat(str6, str1);
    strcat(str7, str2);
    strcat(str8, str1);

    strcmp(str1, str2);
    strcmp(str1, str3);
    strcmp(str1, str4);
    strcmp(str1, str5);
    strcmp(str1, str6);
    strcmp(str1, str7);
    strcmp(str1, str8);

    strlen(str1);
    strlen(str2);
    strlen(str3);
    strlen(str4);
    strlen(str5);
    strlen(str6);
    strlen(str7);
    strlen(str8);

    strrev(str1);
    strrev(str2);
    strrev(str3);
    strrev(str4);
    strrev(str5);
    strrev(str6);
    strrev(str7);
    strrev(str8);

    strncpy(str9, str1, 3);
    strncpy(str10, str2, 3);
    strncpy(str11, str1, 3);

    strncat(str9, str2, 3);
    strncat(str10, str1, 3);
    strncat(str11, str2, 3);

    strncmp(str1, str2, 3);
    strncmp(str1, str3, 3);
    strncmp(str1, str4, 3);
    strncmp(str1, str5, 3);
    strncmp(str1, str6, 3);
    strncmp(str1, str7, 3);
    strncmp(str1, str8, 3);

    strstr(str1, str2);
    strstr(str1, str3);
    strstr(str1, str4);
    strstr(str1, str5);
    strstr(str1, str6);
    strstr(str1, str7);
    strstr(str1, str8);

    return 0;
}

int strrev(char *str)
{
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return 0;
}
