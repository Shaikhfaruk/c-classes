// create simple calculator using switch statement
#include <stdio.h>

int main()
{
    int num1, num2, result;
    char op;
    printf("Enter the 2 numbers and the operator: ");
    scanf("%d %c %d", &num1, &op, &num2);
    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("%d / %d = %d\n", num1, num2, result);
        break;
    default:
        printf("Invalid operator\n");
        break;
    }

    return 0;
}
