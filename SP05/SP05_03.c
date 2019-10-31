#include <stdio.h>

int z;
void f(int x){ 
    x = 2;
    z +=2; 
}
int main(void){
    z = 5;
    f(z);
    printf("z = %d\n",z);
    return 0;
}

/* z = 7이 출력된다.
 z가 main 밖에서 선언되어서 static 한 역할을 하기 때문이다.
 따라서 f(z)에 의해 바꿘 z값이 main에 그대로 계속 적용이 되어서. z는 7을 출력하게 된다. */