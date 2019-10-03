/*Some powers of 2 are printed.*/
#include <stdio.h>

int main(void)
{
    int power = 2048;
    while ((power /= 2)>1)
        printf("%-6d", power);
    printf("\n");
    return 0;
}
/* 1도 함께 출력되어 while조건을 임으로 바꾸었다. */