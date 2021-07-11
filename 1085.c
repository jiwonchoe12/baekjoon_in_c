#include <stdio.h>
int minimum(int a, int b);

int main(void)
{
  int x, y, w, h;
  scanf("%d %d %d %d", &x, &y, &w, &h);
  int min = minimum(minimum(x, y), minimum(w-x, h-y));
  printf("%d", min);
  return 0;
}

int minimum(int a, int b)
{
  if(a>b)
    return b;
  else
    return a;
}
