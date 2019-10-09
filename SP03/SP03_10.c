#include <stdio.h>

int main(void)
{
    char c = -1;
    signed char s = -1;
    unsigned char u = -1;
    printf("c = %d s = %d u = %d\n", c, s, u);
}
/* char형과 signed char형이 동일하다고 말할 수 있다.
사용자가 사용하는 ANSI C 컴파일러는 char <-> signed char 변경하는 옵션을 제공하지 않는다. */

