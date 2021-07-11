#include <stdio.h>
int maximum(int a, int b);
void right_triangle(int len1, int len2, int len3);
int max=0;

int main(void)
{
  while(1)
  {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a==0 && b ==0 && c ==0)
      break;
    max = maximum(maximum(a, b), c);
    right_triangle(a, b, c);
  }
  return 0;
}

int maximum(int a, int b)
{
  if(a>b)
    return a;
  else
    return b;
}

void right_triangle(int len1, int len2, int len3)
{
  if(max == len1)
  {
    if(len1*len1 == len2*len2 + len3*len3)
      printf("right\n");
    else
      printf("wrong\n");
  }
  else if(max == len2)
  {
    if(len2*len2 == len1*len1 + len3*len3)
      printf("right\n");
    else
      printf("wrong\n");
  }
  else
  {
    if(len3*len3 == len2*len2 + len1*len1)
      printf("right\n");
    else
      printf("wrong\n");
  }
}
