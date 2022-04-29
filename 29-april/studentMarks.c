// student marks program

#include <stdio.h>

int main()
{
    int Progaming, History, Math, Science, English, perc, a, b, totalMarks = 500;
    printf("Enter marks of Progaming: ");
    scanf("%d", &Progaming);
    printf("Enter marks of History: ");
    scanf("%d", &History);
    printf("Enter marks of Math: ");
    scanf("%d", &Math);
    printf("Enter marks of Science: ");
    scanf("%d", &Science);
    printf("Enter marks of English: ");
    scanf("%d", &English);

    a = Progaming + History + Math + Science + English;
    b = a * 100;
    perc = b / totalMarks;
    printf("\nTotal marks: %d\n", totalMarks);
    printf("Total marks obtained: %d\n", a);
    printf("Percentage: %d\n", perc);

    return 0;
}
