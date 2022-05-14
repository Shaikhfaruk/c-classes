// enter length in centimeter and find its equivalent in meter, kilometer, inch, feet and yard
#include <stdio.h>

int main()
{
    float length;
    printf("Enter length in centimeter: ");
    scanf("%f", &length);
    printf("\nLength in meter: %f", length / 100);
    printf("\nLength in kilometer: %f", length / 100000);
    printf("\nLength in inch: %f", length / 2.54);
    printf("\nLength in feet: %f", length / 30.48);
    printf("\nLength in yard: %f", length / 91.44);

    return 0;
}
