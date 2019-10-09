#include <stdio.h>

int main(void)
{
    double eps = 1e-37;

    while(eps <= 1.0)
        if  (1.0 < 1.0 + eps)
        {
            printf("eps = %.37f\n", eps);
            break;
        }
        else
        {
            eps = eps * 10;
        }
    return 0;
}
/* 사용자의 컴퓨터에서 eps 값은 0.0000000000000010000000000000000777054 이다.*/