#include <stdio.h>
#include <math.h>

float harmonic(int,float);

int main(int argc, char **argv) {
  int k,N=1;
  float p = 1.1;
  
  if (argc > 2){
      sscanf(argv[2], "%f", &p);
  }

  if (argc > 1){
    sscanf(argv[1], "%d", &N);
  }

  printf("Harmonic sum from 1 to %d) for p=%f=%f\n", N,p, harmonic(N,p));
  return 0;
}

float harmonic(int N, float p){
  float y = 0.0;
  
  for(int k = 1; k <= N; k++){
    y+= 1.0/pow(k,p);
  }

  return(y);

}