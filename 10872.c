#include <stdio.h>

int factorial(int);

int main(void)
{
  int n;
  scanf("%d", &n);
  printf("%d", factorial(n));
  return 0;
}

int factorial(int n)
{
  if (n==1 || n==0)
    return 1;
  else if (n>1) {
    return n*factorial(n-1);
  }
}

/*
if (num>1)
  return num*factorial(num-1);
else
  return 1;
*/
