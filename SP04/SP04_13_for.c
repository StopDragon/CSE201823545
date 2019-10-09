#include <stdio.h> 

int main (void){ 
    int n, loop;
    int sum = 0;

    printf("Enter yout number: ");
    scanf("%d", &n);

// if n > 0
    for(loop = n; n > 0 && loop < n * 2 + 1; loop++){
        sum += loop;
}

// if n < 0
    for(loop = n * 2; n < 0 && loop < n + 1; loop++){
        sum += loop;
}

    printf("sum = %d\n", sum);
    return 0;
}