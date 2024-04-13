#include <stdio.h>

int main()
{
  int arreglo[10] = {10,1,2,-3,-100,1000,-200,7,1,0};
  int menor = 0;

  for(int i = 0; i < 10; i++){
    if(arreglo[i] < arreglo[menor]){
      menor = i;
    }
  }
  printf("\n El elemento de menor valor en el arreglo es: %d", arreglo[menor]);
}
