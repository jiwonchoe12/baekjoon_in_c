#include <stdio.h>
#include <string.h>

int main(void)
{
  char n[11] = { NULL };
  scanf("%s", n);
  char temp;
  for (int i=0; i<strlen(n)-1; i++)
  {
    for (int j=i+1; j<strlen(n); j++)
    {
      if(n[i] < n[j])
      {
        temp = n[i];
        n[i] = n[j];
        n[j] = temp;
      }
    }
  }
  printf("%s", n);
  return 0;
}
