#include <stdio.h>
#include <math.h>
int is_prime(int a);

int main(void)
{
  int m, n;
  scanf("%d", &m);
  scanf("%d", &n);
  int count = 0;
  int least = 0;
  for (int i=m; i<=n; i++)
  {
    int value = is_prime(i);
    if (value !=0 && value != 1)
    {
      count = count + value;
      if(least == 0 || least > value)
      {
        least = value;
      }
    }
  }

  if (count == 0)
    printf("%d\n", -1);
  else
  {
    printf("%d\n", count);
    printf("%d\n", least);
  }

  return 0;
}

int is_prime(int a)
{
  int buff = (int)sqrt(a);
  for (int i=2; i<=buff; i++)
  {
    if(a%i==0)
      return 0;
  }
  return a;
}
