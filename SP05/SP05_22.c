#include <stdio.h>
#include <stdlib.h> 
#define FOREVER 1 
#define STOP 17

int main(void){
    void f(void);
    while (FOREVER) 
        f();
    return 0; 
}
void f(void){
    static int cnt = 0; 
    printf("cnt = %d\n",++cnt); 
    if (cnt == STOP) 
        exit(0);
}

/* main 함수 안에서 f가 while 무한 루프로 들어가지만 
cnt가 1씩 증가하면서 위에서 정의한 STOP이 17이 되면 
exit(0) 함수로 프로그램을 빠져 나간다. */