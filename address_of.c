//주소 연산자
#include <stdio.h>

int main(void)
{
  int i = 10;
  char c = 69;
  double f = 12.3;

  printf("i address : %u\n", &i);
  printf("c address : %u\n", &c);
  printf("f address : %u\n", &f);
  return 0;
}
