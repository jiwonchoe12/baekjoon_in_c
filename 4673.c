#include <stdio.h>

void self_num(int num);
int a[10000] = {0};

int main(void)
{
  int num = 1;
  while (num<=10000)
  {
    self_num(num);
    num++;
  }
  for (int i=1; i<10000; i++)
  {
    if (a[i] == 0)
      printf("%d\n", i);
  }
  return 0;
}

void self_num(int num)
{
  int number = num;
  while (number < 10000)
  {
    int q, r = 0; // q는 몫 r은 나머지
    int sum = number; //자기 자신의 수 더하기
    // num = 1, 11, 123, 1234
    do
    {
      q = number / 10;
      r = number % 10;
      sum = sum + r;
      number = q;
    } while(number>=10);
    sum = sum + q;
    number = sum;
    a[number] = 1;
  }
}
