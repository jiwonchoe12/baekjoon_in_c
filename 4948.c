#include <stdio.h>
#include <math.h>
int is_prime(int k);

int main(void)
{
  while(1)
  {
    int n;
    scanf("%d", &n);
    if(n==0) break;

    printf("%d\n", is_prime(n));
  }
  return 0;
}

int is_prime(int k)
{
  int count = 0;
  for (int i=k+1; i<=2*k; i++)
  {
    int value = 0;
    int buff = (int)sqrt(i);
    for (int j=2; j<=buff; j++)
    {
      if(i%j==0)
      {
        value = 1;
        break;
      }
    }
    if ( value == 0)
      count = count + 1;
  }
  return count;
}
