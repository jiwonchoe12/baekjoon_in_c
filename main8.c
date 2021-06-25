#include <stdio.h>

int main(void)
{
  int n, x;
  scanf("%d" "%d", &n, &x);

  for (int k = 1; k<=n; k++)
  {
    int i;
    scanf("%d", &i);
    if (i<x)
      printf("%d ", i);
  }
  return 0;
}
