#include <stdio.h>

void vecsin(int N, float*x, float *y);
void sgemv(char *TRANS, int *M, int*N, float* ALPHA, float*A, int*LDA, 
            float*X, int*INCX, float *BETA, float*Y, int *INCY);

void main(void){
    float y[3] = {0.0, 0.0, 0.0}, x[3] = {1.0,-1.0, 2.0};
    float A[6] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    float ALPHA=1.0, BETA=0.0;
    int M =2, N=3, LDA=M, INCX = 1, INVC = 1, k,l;
    char TRANS= 'N';
    
    for (l=0; l < N; l++){
        for(k =0; k<M; k++){
            printf("%f", A[k+l*M]);
            printf("\n");
        }
    }
    sgemv(&TRANS, &M, &N, &ALPHA, &A, &LDA, x, &INCX, &BETA, y, &INCX);
}