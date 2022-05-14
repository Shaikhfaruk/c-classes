// When a goto statement is encountered in a C program,
// the control jumps directly to the label mentioned in the goto statement

// Syntax of goto statement in C

// goto label_name;
// ..
// ..
// label_name: C-statements
// Flow Diagram of goto
// C goto statement

// Example of goto statement

#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum = sum + i;
        if (i == 5)
        {
            goto addition;
        }
    }

addition:
    printf("\n%d\n", sum);

    return 0;
}