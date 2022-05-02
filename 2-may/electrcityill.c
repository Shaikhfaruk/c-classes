// Electricity bill calculator
#include <stdio.h>

int main()
{
    int units;
    float charge;
    printf("Enter the units consumed: ");
    scanf("%d", &units);
    if (units <= 100)
    {
        charge = units * 0.75;
    }
    else if (units > 100 && units <= 200)
    {
        charge = 100 * 0.75 + (units - 100) * 1.20;
    }
    else if (units > 200 && units <= 300)
    {
        charge = 100 * 0.75 + 100 * 1.20 + (units - 200) * 1.50;
    }
    else
    {
        charge = 100 * 0.75 + 100 * 1.20 + 100 * 1.50 + (units - 300) * 2.00;
    }
    printf("The electricity bill is %.2f\n", charge);

    return 0;
}
