#include <stdio.h>

int main(){
  int c;
  char l = '\\';

  while((c = getchar()) != EOF){
    putchar(l);
  }
}
