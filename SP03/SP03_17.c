#include <stdio.h>
#include <limits.h> /* for UINT_MAX*/

int main(void)
{
    int i;
    unsigned u = UINT_MAX; /*typically 4294967295 or 65535*/
    for (i=0; i<10;++i)
        printf(" %u + %d = %u\n", u, i, u + i);
    for (i=0; i<10;++i)
        printf(" %u * %d = %u\n", u, i, u * i);
    return 0;   
}
/* 4294967295는 17번 예시에서 24시간 표현을 갖는 시계처럼 23시 같은 숫자이다.
4294967295에서 1을 더하게 되면 24시 즉 0시가 되는것처럼 0이 된다.
마찬가지로 곱하기를 하여도 4294967295를 마지막 기준으로 숫자가 바귄다. */