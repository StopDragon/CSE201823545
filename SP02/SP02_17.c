#include <stdio.h>

int main(void)
{
    int a = 1, b = 2, c = 3;
    (a += (b += (c += 7))); /*a += b += c += 7;*/
    printf("a = %d, b = %d, c = %d\n", a, b, c);
}
/* a += b는 a = a + b이므로 a = 13, b = 12, c = 10이라는 값을 출력한다 */