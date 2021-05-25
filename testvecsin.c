/*
Compliation line: gcc testvecsin.c vecsin.c -lm
which create a.out (if no errors)
function which for a give x computes 
y = [sin(x(k))] - y must allocate beforhead
*/
#include <stdio.h>
#include <stdlib.h>


void vecsin(int N, float *x, float *y);



void main(void){
    unsigned int N = 11,k;
    float *x, *y, a =0, b= 1, h=(b-a)/(N-1);

    x = (float*) malloc(N*sizeof(float));
    y = (float*) calloc(N, sizeof(float));
    for(k =0; k <N; k++){
        x[k] = a+ k*h;
        printf("x[%d]=%f y[%d]=%f\n", k, x[k], k, y[k]);
    }
    vecsin(13, x, y);
    for(k =0; k <13; k++){
        x[k] = a+ k*h;
        printf("x[%d]=%f y[%d]=%f\n", k, x[k], k, y[k]);
    }
    free(x);
    free(y);
}