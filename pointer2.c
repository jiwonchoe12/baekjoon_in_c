//다른 변수의 주소를 포인터에 저장하여 포인터의 값을 변경한다

#include <stdio.h>

int main(void)
{
  int x = 10, y = 20;
  int *p;

  p = &x;
  printf("p = %d\n", p);
  printf("*p = %d\n\n", *p);

  p = &y;
  printf("p = %d\n", p);
  printf("*p = %d\n\n", *p);
  return 0;
}
