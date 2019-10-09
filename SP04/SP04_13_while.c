#include <stdio.h> 

int main (void){ 
    int n, loop;
    int sum = 0;

    printf("Enter yout number: ");
    scanf("%d", &n);
    loop = n;

// if n > 0
    while(n > 0 && loop < n * 2 + 1){
        sum += loop;
        loop++;
}
// if n < 0
    while(n < 0 && loop > n * 2 - 1){
        sum += loop;
        loop--;
}

    printf("sum = %d\n", sum);
    return 0;
}