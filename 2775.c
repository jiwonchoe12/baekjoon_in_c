#include <stdio.h>

int main(void)
{
  int t;
  scanf("%d", &t);
  int a[15][14] = {0};
  for (int j=1; j<15; j++)
  {
    a[0][j] = j;
  }

  for (int i=1; i<15; i++)
  {
    for (int j=1; j<15; j++)
    {
      if(j==1)
        a[i][j] = 1;
      else
      {
        a[i][j] = a[i][j-1] + a[i-1][j];
      }
    }
  }
  for (int i=0; i<t; i++)
  {
    int k, n;
    scanf("%d", &k); //k층
    scanf("%d", &n); //n호
    printf("%d\n", a[k][n]);
  }
  return 0;
}
