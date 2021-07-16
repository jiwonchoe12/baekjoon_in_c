#include <stdio.h>

int main(void)
{
  int k;
  scanf("%d", &k);
  int a[100000];
  int count = 0;
  for (int i=0; i<k; i++)
  {
    scanf("%d", &a[i]);
    if (a[i]==0)
    {
      for (int j=i-1; ;j--)
      {
        if(a[j]!=0)
        {
          a[j] = 0;
          break;
        }
      }
    }
  }
  for (int i=0; i<k; i++)
  {
    count = count + a[i];
  }
  printf("%d\n", count);
  return 0;
}
