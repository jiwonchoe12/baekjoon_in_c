#include <stdio.h>

int main(void)
{
  int x;
  scanf("%d", &x);
  int num = x;
  int i = 1;
  int count = 0;
  while(num>0)
  {
    num = num - i;
    i++;
    count += 1;
  }
  x = x - ((count * (count - 1)) / 2);
  if (count % 2 == 0) //짝수줄일때
  {
    printf("%d/%d", x, (count+1-x));
  }
  else
  {
    printf("%d/%d", (count+1-x), x);
  }
  return 0;
}
