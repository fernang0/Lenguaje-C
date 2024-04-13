#include <stdio.h>

int potencia(int a, int b)
{
int valor = 1;
while(b){
  b--;
  valor *= a;
}
printf("%d", valor);
}

int main()
{
potencia(4,2);
}
