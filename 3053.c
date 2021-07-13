#include <stdio.h>
#define PI 3.14159265358979

int main(void)
{
  int r;
  scanf("%d", &r);
  double euclid = r * r * PI;
  double taxi = 2.0 * r * r;
  printf("%f\n", euclid);
  printf("%f\n",taxi);
  return 0;
}
