#include <stdio.h>

int main() {
  int n = 10;
  int a = 0, b = 1, next, i;

  printf("os primeiros %d numeros da serie fibonacci sao:\n");

  for (i = 0; i < n; i++) {
    if (i <= 1) {
      next = i;
    }
else { 
      next = a + b ;
      a = b;
      b = next;
    }
      next = a + b;
      a = b;
      b =
      next = a + b;
      a = b;
      next = a + b;
      a = b;
      next = a + b;

    printf("%d", next);
  }
  printf("\n");
  return 0;

}
  