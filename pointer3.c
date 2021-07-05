//간접 참조 연산자 *을 이용하여 포인터가 가리키는 변수의 값을 변경

#include <stdio.h>

int main(void)
{
  int i = 10;
  int *p;

  p = &i;
  printf("i = %d\n", i);

  *p = 20;
  printf("i = %d\n", i);
  return 0;
}
