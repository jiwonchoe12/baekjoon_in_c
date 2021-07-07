#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  int left = 0;
  int right = 0;
  int total = 1;
  int number = n;

  while (number>10)
  {
    number = number/10;
    total++;
  }

  int half = total / 2;

  for (int i=half+1; i<=total; i++)
  {
    right = right + (n % 10);
    n = n / 10;
  }


  for (int i=1; i<=half; i++)
  {
    left = left + (n % 10);
    n = n / 10;
  }


  if (left == right)
    printf("LUCKY");
  else
    printf("READY");
  return 0;
}
