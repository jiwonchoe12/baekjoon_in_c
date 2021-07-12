#include <stdio.h>
#include <math.h>
int is_prime(int a);

int main(void)
{
  int m,n;
  int count = 0;
  scanf("%d %d",&m, &n);
  for (int i = m; i<=n; i++)
  {
    int number = is_prime(i);
    if(number != 0 && number != 1)
      printf("%d\n", number);
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
