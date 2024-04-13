#include <stdio.h>

int main()
{
  int a, b;
  printf("Ingrese la altura del rectangulo: ");
  scanf("%d", &a);
  printf("\nIngrese el ancho del rectangulo: ");
  scanf("%d", &b);
  printf("\n\nArea: %d\nPerimetro: %d", a*b, 2*a+2*b);
}
