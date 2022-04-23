//  unsigned decimal_to_binary(unsigned n)

#include <stdio.h>

int main()
{
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n);
    printf("%u in binary is ", n);
    unsigned int binary = decimaltobinary(n);
    printf("%u\n", binary);
    return 0;
}