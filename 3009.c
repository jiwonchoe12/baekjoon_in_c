#include <stdio.h>

int main(void)
{
  int x1, x2, x3, y1, y2, y3;
  int x[1000] = {0};
  int y[1000] = {0};
  scanf("%d %d", &x1, &y1);
  scanf("%d %d", &x2, &y2);
  scanf("%d %d", &x3, &y3);
  x[x1]++;
  y[y1]++;
  x[x2]++;
  y[y2]++;
  x[x3]++;
  y[y3]++;

  int num_x = 0;
  int num_y = 0;

  for (int i=0; i<1000; i++)
  {
    if(x[i]==1)
      num_x = i;
    if(y[i]==1)
      num_y = i;
  }

  printf("%d %d", num_x, num_y);

  return 0;
}
