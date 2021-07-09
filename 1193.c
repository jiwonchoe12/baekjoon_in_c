//시간초과가 나지 않기 위해 반복문을 쓰면 안됨
#include <stdio.h>
#include <math.h>

int main(void)
{
  int a, b, v;
  scanf("%d %d %d", &a, &b, &v);
  int n;

  n = ceil((double)(v-a)/(a-b))+1;

  printf("%d", n);
  return 0;
}

/*#include <stdio.h>

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
}*/
