#include <stdio.h>

int main() {
  int i=0, c=0, max=0, sum=0, score=0;
  scanf("%d", &c);
  for (int i=0; i<c; ++i) {
    scanf("%d", &score);
    sum += score;
    if (score > max) max=score;
  }
  printf("%.5f", sum*100 / (c*(double)max));
}