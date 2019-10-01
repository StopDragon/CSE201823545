/*Some powers of 2 are printed.*/
#include <stdio.h>

int main(void)
{
    int power = 2048;
    while ((power /= 2)>0)
        printf("%-6d", power);
    printf("\n");
    return 0;
}