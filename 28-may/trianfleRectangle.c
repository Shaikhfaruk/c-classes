// write a program find area of triangle and rectangle
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the length of triangle: ");
    scanf("%d", &a);
    printf("Enter the breadth of triangle: ");
    scanf("%d", &b);
    printf("Enter the length of rectangle: ");

    scanf("%d", &c);
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &d);

    int area_triangle = a * b / 2;
    int area_rectangle = c * d;

    printf("Area of triangle: %d\n", area_triangle);
    printf("Area of rectangle: %d\n", area_rectangle);

    return 0;
}

// Output:
// Enter the length of triangle: 5
// Enter the breadth of triangle: 6
// Enter the length of rectangle: 7
// Enter the breadth of rectangle: 8
// Area of triangle: 15
// Area of rectangle: 56
