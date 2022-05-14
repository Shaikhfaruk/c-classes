// enter temperature in celcius and find its equivalent in fahrenheit and kelvin
#include <stdio.h>

int main()
{
    float celcius;
    printf("Enter temperature in celcius: ");
    scanf("%f", &celcius);
    printf("\nTemperature in fahrenheit: %f", (celcius * 9 / 5) + 32);
    printf("\nTemperature in kelvin: %f", celcius + 273.15);

    return 0;
}
