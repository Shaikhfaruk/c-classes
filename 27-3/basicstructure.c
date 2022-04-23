// program:Basic Structure of C program
/* Name: Techstudy
   Batch1:C programmming*/
#include <stdio.h> // Link asection
#define MAX 'G'    // symbolic Cinstant || define section

int a = 5; // Global Variable if we want to use as per requre

// Here start main function
void main()
{
    // Print global value
    printf("\n%d\n", a);
    // Reasign value inside a variable
    int a = 10, b = 5, c;
    printf("Here we started to c programming\n");
    // Here Addition
    c = a + b;
    // For user Output
    printf("%d\n", c);
    // return 0;
}