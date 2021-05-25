#include <stdio.h>

int pierwsze_zadanie(void) {
  int a,b;

  printf("Hello World\n");
  scanf("%d %d", &a, &b);
  printf("%d+%d= %d\n", a,b,a+b);

  return 0;
}