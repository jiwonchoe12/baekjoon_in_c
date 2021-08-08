#include <stdio.h>
#include <string.h>

int main(void)
{
  int arr[26], i, j;
  char s[100];

  scanf("%s", s);

  for (i=0; i<26; i++)
    arr[i] = -1;
  for (i='a'; i='z'; i++)
  {
    for (j=0; j<strlen(s); j++)
    {
      if(i==s[j])
      {
        arr[s[j]-'a'] = j;
        break;
      }
    }
  }
  for (i=0; i<26; i++)
  {
    printf("%d", arr[i]);
    if(i<25)
      printf(" ");
  }
  return 0;
}
