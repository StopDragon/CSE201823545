#include <stdio.h>

int main(void)
{
    printf("Why is 21 + 31 equal to %d?\n", 2l + 3l);
}

/* (4바이트 = 32비트) int 컴퓨터에서 소문자 l은 long이라는 데이터라는 뜻이다.
결국 2 + 3 이라는 뜻이다. */