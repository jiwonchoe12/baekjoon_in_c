#include <stdio.h>

int main(void)
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  if((c-b)==0)
  {
    printf("-1");
  }
  else
  {
    int value = a / (c-b);

    if ( value >= 0 )
    {
      printf("%d", value+1);
    }
    else
    {
      printf("-1");
    }
  }


  return 0;
}
