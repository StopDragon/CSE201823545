#include <stdio.h>

int main(void){
    int i = 7, *p = &i;
    printf("%s%d\n%s%p\n",
    "   Value of i: ", *p,
    "Loaction of i: ", p);
    return 0;
}