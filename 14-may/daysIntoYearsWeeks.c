// convert days into years, weeks and days
#include <stdio.h>

int main()
{
    int days;
    printf("Enter number of days: ");
    scanf("%d", &days);
    printf("\nNumber of years: %d", days / 365);
    printf("\nNumber of weeks: %d", days / 7);
    printf("\nNumber of days: %d", days % 7);

    return 0;
}
