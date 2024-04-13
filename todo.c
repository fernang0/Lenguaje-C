#include <stdio.h>

int main()
{
  int t, c, b, nl;
  nl = 0;
  while((c = getchar()) != EOF){
    if(c == '\t'){++t;}
    else if(c == ' '){++b;}
    else if(c == '\n'){++nl;}
  }
  printf("Tabulaciones: %d, Espacios: %d, Nuevas lineas: %d", t, b, nl);
}
