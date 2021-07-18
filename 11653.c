#include <stdio.h>
#include <math.h>

int main(void)
{
  int n;
  scanf("%d", &n);

  for (int i=2; i<=sqrt(n); i++)
  {
    while (n%i ==0)
    {
      printf("%d\n", i);
      n = n/i;
    }
  }
  if (n != 1)
    printf("%d\n", n);
}
