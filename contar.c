#include <stdio.h>

long whileform()
{
  long nc = 0;
  while(getchar() != EOF){
    ++nc;
  }
  printf("%ld\n", nc);
}
long forform()
{
  long nc;
  for(nc = 0; getchar() != EOF; ++nc);
  printf("%ld\n", nc);
}
int lineas()
{
  int nl,c;
  nl = 0;
  while((c = getchar()) != EOF){
    if(c == '\n'){
      ++nl;
    }
  }
  printf("%d", nl);
}
int todo()
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
int main()
{
  todo();
}
