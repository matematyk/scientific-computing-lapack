#include <stdio.h>

int main(int argc, char **argv){
  int a,b,k;
  for(k =0; k < argc; k++){
    print("%s\n", argv[k]);
  }
  if (argc> 2){
    print("Executable file %s has %d extra parameters\n", argv[0], argc-1);
    sscanf(argv[1], "%d", &a);
    sscanf(argv[2], "%d", &b);
  }
  printf("namely two interer number %d %d \n", a, b);
  printf("%d + %d = %d", a,b, a+b);

  return 0;
}