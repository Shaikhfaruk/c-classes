// enter lenght and breadth of rectangle and find area and perimeter of rectangle
#include <stdio.h>

int main()
{
    int length, breadth;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);
    printf("\nArea of rectangle: %d", length * breadth);
    printf("\nPerimeter of rectangle: %d", 2 * (length + breadth));

    return 0;
}
