//"\n"
//scanf(" %c");
#include <stdio.h>

int main(void)
{
  char my_chess[8][8];
  int count = 0;

  for (int i=0; i<8; i++)
  {
    for (int j=0; j<8; j++)
    {
      scanf(" %c", &my_chess[i][j]);
      if((i%2==1 && j%2==1) || (i%2==0 && j%2==0))
      {
        if(my_chess[i][j]=='F')
          count++;
      }
    }
    "\n";
  }

  printf("%d\n", count);
  return 0;
}

/*char arr[8][8];
int main()
{
  int cnt = 0;
  for (int i=0; i<8;i++)
  {
    gets(arr[i]);
  }
  for (int i=0; i<8; i+=2)
  {
    for(int j=0; j<8; j+=2)
    {
      if (arr[i][j]=='F')
        cnt++;
    }
  }
  for (int i=1; i<8; i+=2)
  {
    for(int j=1; j<8; j+=2)
    {
      if (arr[i][j]=='F')
        cnt++;
    }
  }
  printf("%d\n",cnt);
  return 0;
}*/
