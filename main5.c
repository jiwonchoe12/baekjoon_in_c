#include <stdio.h>

int main(void)
{
  int t;
  scanf("%d", &t);
  int a, b;

  for (int x = 1; x<=t; x++)
  {
    scanf("%d" "%d", &a, &b);
    printf("Case #%d: %d", x, a+b);
    printf("\n");
  }
  return 0;
}
