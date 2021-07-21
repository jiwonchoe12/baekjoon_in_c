#include <stdio.h>

int main(void)
{
  int n;
  int sum = 0;
  scanf("%d", &n);
  char num[n];
  scanf("%s", num);
  for (int i=0; i<n; i++)
    sum += num[i] - '0';
  printf("%d", sum);
  return 0;
}
