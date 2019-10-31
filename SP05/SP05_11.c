#include <stdio.h> 
#include <limits.h> 

int is_prime(int); 
int main(void){
    int x;
    scanf("%d",&x);
    if (is_prime(x)){ 
        printf(" PRIME!! \n");
        }
    else{
        printf("NOT PRIME !! \n"); 
        }
    return 0;
}
int is_prime(int n){
    int i;
    for (i = 2; i <n; ++i){
        if ( n % i == 0 && n != i) return 0; 
    }
    return 1;
}