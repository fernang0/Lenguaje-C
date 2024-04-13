#include <stdio.h>

int main()
{
  int maxScore = 500;

  int userScore = 420;

  float percentaje = (float) userScore / maxScore * 100.0;

  printf("User's percentaje is %.2f", percentaje);
}
