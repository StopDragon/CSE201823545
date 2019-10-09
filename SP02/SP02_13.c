/*Some powers of 2 are printed.*/
#include <stdio.h>

int main(void)
{
    int power = 2048;
    for (;power > 0;){
        power /= 2;
        for (;power > 1;){ /* 마지막에 1과 0을 거르기 위해서 */
            printf("%-6d", power);
            break;
        }
    }
    printf("\n");
    return 0;
}

/* for루프를 사용하지만 power가 1일 때 까지 진행되어 0까지 출력되어 for문을 두번 사용했다 */