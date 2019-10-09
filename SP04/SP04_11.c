#include <stdio.h>

printf("Input two integers: ");
scanf("%d%d", &i, &j);
while (i * j < 0 && ++i !=7 && j++ !=9){
    ..... /* do something */
}
/* i혹은 j가 while 조건에서 언젠가 7이나 9가 될 수 밖에 없다. 
그러므로 무한 루프에서 빠지지 않는다.*/