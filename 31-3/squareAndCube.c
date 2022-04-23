// Program to accept a number from user and print it’s square & cube.

#include <stdio.h>

int main()
{
    int num, square, cube1;
    printf("Enter a number: ");
    scanf("%d", &num);
    square = num * num;
    cube1 = num * num * num;
    printf("Square of %d is %d\n", num, square);
    printf("Cube of %d is %d\n", num, cube1);

    return 0;
}
