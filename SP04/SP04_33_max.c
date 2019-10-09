#include <stdio.h>

int main(){
    int x, y, z, w, a;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    printf("Enter w: ");
    scanf("%d", &w);
    printf("%d \n", (((((x>y)?x:y)>z)?((x>y)?x:y):z)>w)?((((x>y)?x:y)>z)?((x>y)?x:y):z):w);
}