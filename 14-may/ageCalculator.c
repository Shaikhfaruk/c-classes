// enter age in string and calculate the number of years, days, hours, minutes and seconds
#include <stdio.h>
#include <string.h>

int main()
{
    char age[10];
    printf("Enter age: ");
    scanf("%s", age);
    int years = atoi(strtok(age, "y"));
    int days = atoi(strtok(NULL, "d"));
    int hours = atoi(strtok(NULL, "h"));
    int minutes = atoi(strtok(NULL, "m"));
    int seconds = atoi(strtok(NULL, "s"));
    printf("\nNumber of years: %d", years);
    printf("\nNumber of days: %d", days);
    printf("\nNumber of hours: %d", hours);
    printf("\nNumber of minutes: %d", minutes);
    printf("\nNumber of seconds: %d", seconds);

    return 0;
}
