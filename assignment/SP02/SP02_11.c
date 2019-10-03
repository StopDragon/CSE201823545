/*Some powers of 2 are printed.*/
#include <stdio.h>

int main(void)
{
    int i = 0, power = 1;
    while (i++ <= 10)
        printf("%-6d", power *= 2);
    printf("\n");
    return 0;
}

/*i++에서 ++i로 바꾸면 값이 11까지 나오므로 2048이 더 출력된다*/