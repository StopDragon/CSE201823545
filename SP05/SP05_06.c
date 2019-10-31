#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int a,b,cnt = 0,i;
    srand(time(NULL));
    for (i=0;i<1000;i++){
        a= rand() %3 +1;
        b =rand() % 30 +1;
        if (b-a <=1) continue;
            assert(b-a>2);
            printf("%3d₩n",++cnt);
    }
    return 0;
}

/* a와 b의 차가 2이하일때 단정에 실패한다. 
가능한 쌍을 나타내면 (1,1) (1,2) (1,3) (2,1) (2,2) (2,3) (2,4) (3,1) (3,2) (3,3) (3,4) (3,5)의 경우가 있고 전체 경우의 수는 3*30=90가지이다. 
따라서 평균적으로 이 루프는 (1 – 12/90 )의 확률을 가지고 돌게 된다. */