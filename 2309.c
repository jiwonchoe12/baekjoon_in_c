#include <stdio.h>

int main(void)
{
  int a[9] = {0};
  int sum=0;
  for (int i=0; i<9; i++)
  {
    scanf("%d", &a[i]);
    sum = sum + a[i];
  }

  int num1 = 0;
  int num2 = 0;


  for (int i=0; i<8; i++)
  {
    int min = a[i];
    int temp = 0;
    for(int j=i+1; j<9; j++)
    {
      if (min > a[j])
      {
        temp = a[j];//7
        a[j] = min;//8
        min = temp;//7

        a[i] = min;
      }
    }
  }

  for (int i=0; i<8; i++)
  {
    for(int j=i+1; j<9; j++)
    {
      if((sum-a[i]-a[j])==100)
      {
        num1 = i;
        num2 = j;
      }
    }
  }

  for (int k=0; k<9; k++)
  {
    if (k==num1 || k==num2)
      continue;
    printf("%d\n", a[k]);
  }

  return 0;
}
