#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);

  for (int i = 1; i<10; i++)
  {
    printf("%d * %d = %d", n, i, n*i);
    printf("\n");
  }
  return 0;
}
