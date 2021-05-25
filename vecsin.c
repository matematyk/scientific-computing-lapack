#include <math.h>

void vecsin(int N, float *x, float *y){
    int k;
    for(k=1; k < N; k++){
        y[k] = sin(x[k]);
    }
    
}