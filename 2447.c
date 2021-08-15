#include <stdio.h>

void star(int n);

int main(void)
{
  int n;
  scanf("%d", &n);  // n=9 (9번째 줄)
  star(n);
  return 0;
}

void star(int n)
{
  int result;
  for (int i=0; i<n; i++) //9(세로)
  {
    for (int a=0; a<n; a++)
    {
      if (a%3==1 && i%3==1)
        result = 0;
      else if ()
      else
        result = 1;
      if (result == 1)
          printf("*");
      if (result == 0)
          printf(" ");
    }
    printf("\n");
  }
}






/*
N = int(input())
li = [[0 for i in range(N)]for i in range(N)]

def draw_star(n):
    if n == 1:
        return 1
    a = draw_star(n/3)
    for i in range(N):
        for j in range(N):
            if (i % n >= a) and (i % n < a + n/3) and (j % n >= a) and (j % n < a + n/3):
                li[i][j] = 1
    return a * 3


def prt_star():
    for i in range(N):
        for j in range(N):
            if li[i][j] == 0:
                print('*', end='')
            else:
                print(' ', end='')
        print()

draw_star(N)
prt_star()
*/
