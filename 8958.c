#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d\n", &n); //테스트 개수
  for (int i=0; i<n; i++)
  {
    char arr[80];
    int sum = 0;
    int result = 0;
    scanf("%s", arr);
    int size = sizeof(arr)/sizeof(arr[0]);
    for  (int a=0;a<size;a++)
    {
      if (arr[a] == 'O')
      {
        sum += 1;
        result += sum;
        printf("%d\n", result);
      }
      else if (arr[a] == 'X')
      {
        sum = 0;
      }
      else
      {
        break;
      }
    }
    printf("%d\n", result);
  }
  return 0;
}
