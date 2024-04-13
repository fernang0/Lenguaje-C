#include <stdio.h>

int main()
{
  int celsius, fahr;
  int menor, max, pasos;

  menor = 0;
  max = 300;
  pasos = 20;

  fahr=menor;
  printf("F\tC\n");
  while(fahr<=max){
    celsius = 5*(fahr-32)/9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr+pasos;
  }
}
