#include <stdio.h>

int main(void)
{
  int pay;
  scanf("%d", &pay);
  int count = 0;
  pay = 1000 - pay;
  int money = pay / 500;
  count = count + money;
  pay = pay % 500;

  money = pay / 100;
  count = count + money;
  pay = pay % 100;

  money = pay / 50;
  count = count + money;
  pay = pay % 50;

  money = pay / 10;
  count = count + money;
  pay = pay % 10;

  money = pay / 5;
  count = count + money;
  pay = pay % 5;

  count = count + pay;

  printf("%d", count);
  return 0;
}
