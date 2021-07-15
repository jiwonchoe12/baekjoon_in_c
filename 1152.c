#include <stdio.h>
#include <ctype.h>
int count_word (char *s);

int main(void)
{
  char word[1000000];
  gets(word);
  printf("%d\n", count_word(word));
  return 0;
}

int count_word (char *s)
{
    int wc = 0;
    int waiting = 1;

    for (int i=0; s[i]!=NULL; ++i)
    {
      if (isalpha(s[i]))
      {
        if (waiting)
        {
          wc++;
          waiting = 0;
        }
      }
      else
        waiting = 1;
    }
    return wc;
}
