#include <stdio.h>
int distance(int a);

int main(void)

{
  int t;
  scanf("%d", &t);
  for (int i=0; i<t; i++)
  {
    int x, y;
    scanf("%d %d", &x, &y);
    int k = distance(x-y-2);

  }
  return 0;
}

int distance(int a)
{

}
