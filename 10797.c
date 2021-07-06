#include <stdio.h>

int main(void)
{
  int day;
  scanf("%d", &day);

  int number= 0;
  for (int i=0; i<5; i++)
  {
    int num = 0;
    scanf("%d", &num);
    if(num == day)
      number++;
  }
  printf("%d", number);
  return 0;
}
