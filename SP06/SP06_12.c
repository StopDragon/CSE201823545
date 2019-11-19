/* 첫번째 버전 */
#include <stdio.h> 
#include <math.h> 
#define N 5 
double p[N+1]; 
double eval(double *,double,int); 
int main(void){ 
    double x = 1.0; 
    p[0] = 1; 
    p[1] = 2; 
    p[2] = 3; 
    p[3] = 4; 
    p[4] = 5; 
    p[5] = 6; 
    printf("%g₩n",eval(p,x,N)); 
    return 0; 
} 
double eval(double p[],double x,int n){ 
    double sum; 
    int i; 
    for (i = 0; i <= n; i++){
        sum = sum + p[i]*pow(x,n); 
        }
    return sum;
}

/* 두번째 버전 */
#include <stdio.h> 
#include <math.h> 
#define N 5 
double p[N+1]; 
double eval(double *,double,int); 
int main(void){ 
    double x = 1.0; 
    p[0] = 1; 
    p[1] = 2; 
    p[2] = 3; 
    p[3] = 4; 
    p[4] = 5; 
    p[5] = 6; 
    printf("%g₩n",eval(p,x,N)); 
    return 0; 
} 
double eval(double p[],double x,int n){ 
    if (n == 0) return p[N-n]; 
    return p[N-n]+x*eval(p,x,n-1); 
}