#include <stdio.h>

int main(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  int max = 0;

  if ((a%10) > (b%10))
  {
    max = a;
  }
  else if ((a%10) < (b%10))
  {
    max = b;
  }
  else
  {
    if (((a/10)%10) > ((b/10)%10))
      max = a;
    else if (((a/10)%10) < ((b/10)%10))
      max = b;
    else
    {
      if (a/100 > b/100)
        max = a;
      else
        max = b;
    }
  }
  printf("%d\n",100*(max%10) + 10*((max / 10)%10) + (max / 100));

  return 0;
}
