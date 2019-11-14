#include <stdio.h>

int main(void){
    char a[5][10] = {"HaHa", "han yang", "Cheese", "Iphone", "Chin Tao"};
    char *(pc[5]) = {a[0], a[1], a[2], a[3], a[4]};
    char **ppc = pc;

    printf("%c", *(*(pc)));
    printf("%c", *(*(pc)+1));
    printf("%c", *(*(pc+1)+2));
    printf("%s ", *(ppc+1)+4);
    printf("%c", *(*(pc+3)));
    printf("%c", *(*(pc+2)));
    printf("%c\n", *(*(pc+4)+5));
    return 0;
}