#include <stdio.h>
int prime_number(int);

int main(void)
{
  int n;
  int a[100];
  scanf("%d", &n);
  int count = 0;

  for (int i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
    int num = a[i];
    count = count + prime_number(num);
  }
  printf("%d", count);
  return 0;
}

int prime_number(int num)
{
    if (num == 1)
    {
      return 0;
    }
    else
    {
      for (int j=2; j<num; j++)
      {
        if(num%j==0)
          return 0;
      }
      return 1;
    }
}
