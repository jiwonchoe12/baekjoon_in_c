#include <stdio.h>

int main(void)
{
  int t;
  scanf("%d", &t);

  for (int i=0; i<t; i++)
  {
    int r;
    char s[21];
    char s_new[161];
    scanf("%d %s", &r, s);
    int k;

    for(int j=0; s[j]!=0; j++)
    {
      for (k=j*r; k<j*r+r; k++)
      {
        s_new[k] = s[j];
      }
    }
    s_new[k] = '\0';

    printf("%s\n", s_new);
  }
  return 0;
}
