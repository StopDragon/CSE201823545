#include <stdio.h> 
#include <math.h> 

double squareforth(double x){ 
    return sqrt(sqrt(x)); 
}

int main(void){
    double x,y,z;
    printf("%10s = %.5f\n","10^-4",squareforth(10.0));
    printf("%10s = %.5f\n","2^-4",squareforth(2.0));
    return 0;
}