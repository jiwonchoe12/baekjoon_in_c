#include <stdio.h>

int number(int n);

int main(void)
{
  int n;
  scanf("%d", &n);
  int answer = number(n);
  printf("%d", answer);
  return 0;
}

int number(int n)
{
  if (n<100)
    return n;

  else if (n>=100) // n= 456
  {
    int num = 0;
    for (int i=100; i<=n; i++)
    {
      int a = i;
      int n1 = a%10;
      a = a / 10;
      int n2 = a % 10;
      a = a / 10;
      int n3 = a;
      if (n1+n3 == 2*n2)
        num+= 1;
    }
    int result = 99 + num;
    return result;
  }
}
