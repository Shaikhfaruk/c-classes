// check the factors of given number using while loop
#include <stdio.h>

int main()
{
    int num, i = 1; // i is the counter
    printf("Enter number: ");
    scanf("%d", &num); // read the number

    printf("Factors of %d are: ", num);

    while (i <= num)
    {
        if (num % i == 0)
        {
            printf("%d\t", i); // print the factors
        }
        i++; // increment the counter
    }

    return 0;
}
