#include <stdio.h>

int main(void)
{
  int n, b, c, d;
  int cycle = 0;
  scanf("%d", &n);
  int k = n;
  while (1){
    b = k % 10; //일
    c = k / 10; //십
    d = (b + c) % 10;
    k = 10 * b + d;
    if (k == n) break;
        cycle += 1;
  }
  printf("%d", cycle+1);
  return 0;
}
