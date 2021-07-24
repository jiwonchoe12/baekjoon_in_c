#include <stdio.h>

int main(void)
{
  int a, b, v;
  //a :낮에 올라가는 거리 b:밤에 떨어지는 거리 v:총 거리
  scanf("%d %d %d", &a, &b, &v);
  int count = 0;
  int day;
  while(1)
  {
    if (count < v)
    {
      count = count + a;
      day = day + 1;
    }
    if (count < v)
    {
      count = count - b;
    }
    if (count >= v)
      break;
  }
  printf("%d", day);




  return 0;
}
