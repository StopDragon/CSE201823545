#include <stdio.h> 
int main(void){ 
    char a[] = "abcba"; 
    printf("check = abcbc result == %d₩n",check(a)); 
    strcpy (a,"a b cba"); 
    printf("check = a b cba result == %d₩n",check(a)); 
    return 0; 
} 
int check(char a[]){ 
    int i,j,ch_cnt = 1; 
    j = strlen(a)-1; 
    i = 0; 
    while (i < j){ 
        while (a[i] == ' '){
            ++i;
        }
    while (a[j] == ' '){
        --j;
        }
    if (a[i] != a[j]){
        ch_cnt = 0; 
        }
    ++i; 
    --j;
    }
return ch_cnt;
}