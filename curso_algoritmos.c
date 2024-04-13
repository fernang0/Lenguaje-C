#include <stdio.h>

int resta(int a, int b){
  int valor = 0;
  while(b < a){
    b++;
    valor++;
  }
  return valor;
}

int multi(int a, int b){
  int value = 0;
  while(a){
    a--;
    value += b;
  }
  return value;
}

int divi(int a, int b){
  int value = 0;
  while(a>=b){
    value++;
    a-=b;
  }
  return value;
}

int main()
{
  printf("5 - 2 = %d\n", resta(5,2));
  printf("6 x 4 = %d\n", multi(6,4));
  printf("6 entre 2 = %d\n", divi(6,2));
  return 0;
}
