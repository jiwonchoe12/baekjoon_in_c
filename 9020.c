#include <stdio.h>
#include <math.h>
int is_prime(int a, int b);

int main(void)
{
  int t;
  scanf("%d", &t);
  for (int i=0; i<t; i++)
  {
    int n; //n은 짝수 (2보다 큼)
    scanf("%d", &n);
    int k=0;
    int value = 0;
    while(1)
    {
      value = is_prime(n/2-k, n/2+k);
      if(value == 1) break;
      k++;
    }
    printf("%d %d\n", n/2-k, n/2+k);
  }

  return 0;
}

int is_prime(int a, int b)
{
  int buff_a = (int)sqrt(a);
  int buff_b = (int)sqrt(b);
  int prime = 0;
  for (int i=2; i<=buff_a; i++)
  {
    if(a%i==0)
      prime = 1;
  }
  for (int i=2; i<=buff_b; i++)
  {
    if(b%i==0)
      prime = 1;
  }
  if(prime == 0)
    return 1;
  else
    return 0;
}
