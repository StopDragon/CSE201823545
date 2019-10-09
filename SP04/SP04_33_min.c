#include <stdio.h>

int main(){
    int x, y, z, a;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    printf("%d \n", (((x<y)?x:y)<z)?((x<y)?x:y):z);
    return 0;
}