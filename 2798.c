#include <stdio.h>

int main(void)
{
  int n;
  int m;
  int a[100] = { 0 };
  int b[300000] = { 0 };

  scanf("%d %d", &n, &m); //카드의 개수 n장

  for (int i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }

  for (int i = n-1; i > 1; i--)
  {
    for (int j = i-1; j >0; j--)
    {
      for (int k = j-1; k>=0; k--)
      {
        int sum = 0;
        sum = a[i] + a[j] + a[k];
        b[sum] = 1;
      }
    }
  }

  for (int i = m; i>=0; i--)
  {
    if (b[i]==1)
    {
      printf("%d", i);
      break;
    }
  }
  return 0;
}
