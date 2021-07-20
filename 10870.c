#include <stdio.h>

int fibo(int n);

int main(void)
{
  int n;
  scanf("%d", &n);
  printf("%d", fibo(n));
  return 0;
}

int fibo(int n)
{
  int f1 = 0;
  int f2 = 1;
  int a = 0;
  if (n==0)
    return 0;
  else if (n==1)
    return 1;
  else if (n>=2)
  {
    for(int i=0; i<n-1; i++)
    {
      a = f1 + f2;
      f1 = f2;
      f2 = a;
    }
    return a;
  }
}
