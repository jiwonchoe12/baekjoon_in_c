#include <stdio.h>

int main(void)
{
  int n;
  int a[500000] = { 0 };
  scanf("%d", &n);
  for (int i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }
  int sum = 0;

  for (int i=0; i<n; i++)
  {
      sum = sum + a[i];
  }
  float div = (float)sum / n;
  printf("%d", (int)(div+0.5));
  return 0;
}
