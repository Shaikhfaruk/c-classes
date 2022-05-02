// salary calculator
#include <stdio.h>

int main()
{
    int hours, rate, salary;
    printf("Enter the number of hours worked: ");
    scanf("%d", &hours);
    printf("Enter the hourly rate: ");
    scanf("%d", &rate);
    salary = hours * rate;
    printf("Salary is: %d\n", salary);

    return 0;
}
