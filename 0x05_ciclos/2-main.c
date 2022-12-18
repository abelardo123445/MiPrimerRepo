#include <stdlib.h>
#include <string.h>
int main() {
  int n, i, flag = 0;
  printf("Ingrese un número entero positivo: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0) {
    printf("%d es un numero primo.", n);
  } 
  else {
    
      printf("%d no es un número primo.", n);
  }

  return 0;
  
}