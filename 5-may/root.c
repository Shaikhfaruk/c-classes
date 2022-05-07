// Find roots of a quadratic equation using the switch statement.
#include <stdio.h>

int main()
{
    float a, b, c, x1, x2;
    printf("Enter the 3 coefficients of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);
    switch (a == 0)
    {
    case 1:
        printf("The equation is not quadratic\n");
        break;
    case 0:
        switch (b == 0)
        {
        case 1:
            printf("The equation is linear\n");
            break;
        case 0:
            switch (c == 0)
            {
            case 1:
                printf("The equation is constant\n");
                break;
            case 0:
                x1 = -b / (2 * a);
                x2 = -b / (2 * a);
                printf("The roots are %f and %f\n", x1, x2);
                break;
            }
            break;
        }
        break;
    }

    return 0;
}
