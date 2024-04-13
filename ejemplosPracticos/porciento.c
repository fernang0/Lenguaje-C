#include <stdio.h>

int main()
{
  float porcf, porc, num;
  printf("Saber el porcentaje de un numero\n\nIngrese el porcentaje a saber: ");
  scanf("%f", &porc);
  printf("\nIngrese el numero del cual quiere saber el porcentaje: ");
  scanf("%f", &num);
  printf("El %1.f%, de %1.f es %1.f", porc, num, (porc*num)/100);
}
