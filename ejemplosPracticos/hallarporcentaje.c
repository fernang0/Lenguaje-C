#include <stdio.h>

int main()
{
  float x,y;
  int opcion;

  printf("Hallar porcentajes\n\n1) Hallar un tanto porciento de un numero\n2) Hallar un tanto porciento cuando se conoce un tanto de el\n3) Dados dos numeros, averiguar que tanto porciento es uno del otro\n");
  scanf("%d", &opcion);
  if(opcion == 1){
    printf("Ingrese el porcentaje a saber:");
    scanf("%f",&x);
    printf("\nIngrese el numero del cual quiere saber el procentaje: ");
    scanf("%f",&y);
    printf("El %1.f porciento de %1.f es %1.f",x,y,(x*y)/100);
  }
  else if(opcion == 2){

  }
}
