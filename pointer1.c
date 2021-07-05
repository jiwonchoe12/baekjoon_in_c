//&연산자 : 변수의 주소를 구하여 포인터에 대입할 때 사용됨
//*연산자 : 포인터를 통하여 변수를 간접 참조할 떼 사용하는 연산자

//변수와 포인터를 연결한 후 변수의 주소와 포인터의 값을 출력한다
//변수의 값과 포인터가 가르키는 값을 출력한다

#include <stdio.h>

int main(void)
{
  int i = 3000;
  int *p = NULL;

  p = &i;
  printf(" p = %u\n", p);
  printf("&i = %u\n\n", &i);

  printf("i = %d\n", i);
  printf("*p = %d\n", *p);
  return 0;
}
