//설탕 배달
#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  int num = n / 5; //num =0 or num = 3
  int value = 0;
  if(num ==0)
  {
    if (n%3==0)
    {
      printf("%d\n", n/3);
    }
    else
      printf("%d\n", -1);
  }
  else
  {
    for (int i=num; i>=0;i--)
    {
      int left = n - 5 * i;
      if(left % 3 ==0)
      {
        printf("%d\n", i+(left/3));
        value = 1;
        break;
      }
      else
      {
        continue;
      }
    }
    if (value ==0)
      printf("%d\n", -1);
  }

  return 0;
}
