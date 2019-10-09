#include <stdio.h>

void wrt_address(void){
    printf("%s\n%s\n%s\n%s\n%s\n\n",
    "         ***********************",
    "         **  SANTA CLAUS       *",
    "         **  NORTH POLE        *",
    "         **  EARTH             *",
    "         ***********************");    
}

int main(void){
    int r;
    int n = 0;
    printf("How many count do you want? ");
    while (scanf("%d", &r) != 1 || r < 1){
        printf("\n ERROR: more than 0\nHow many count do you want?");
    }
    while (n < r){
        wrt_address();
        n++;
    }
}