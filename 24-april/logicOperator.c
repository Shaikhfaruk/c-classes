// Logic operator simple example

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    if (a && b)
    {
        printf("a and b are true\n");
    }

    if (a || b)
    {
        printf("a or b is true\n");
    }

    if (a && b && c)
    {
        printf("a and b and c are true\n");
    }

    if (a || b || c)
    {
        printf("a or b or c is true\n");
    }

    if (a && b && c && d)
    {
        printf("a and b and c and d are true\n");
    }

    if (a || b || c || d)
    {
        printf("a or b or c or d is true\n");
    }

    if (a && b || c && d)
    {
        printf("a and b or c and d is true\n");
    }

    if (a || b && c || d)
    {
        printf("a or b and c or d is true\n");
    }

    if (a && b && c && d || a && b && c && d)
    {
        printf("a and b and c and d or a and b and c and d is true\n");
    }

    return 0;
}
