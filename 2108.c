#include <stdio.h>

//N : 홀수

int main(void)
{
  int n;
  int a[500000] = { 0 };
  int b[500000] = { 0 };
  scanf("%d", &n);
  for (int i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }
  int sum = 0;

  for (int i=0; i<n; i++)
  {
      sum = sum + a[i];
  }
  float div = (float)sum / n;
  if(div<0){
      printf("%d\n", (int)(div-0.5));
  }
  else
  {
      printf("%d\n", (int)(div+0.5));
  }

  for (int j=0; j<n; j++)
  {
      int min = a[j];
      for (int i=j+1; i<n; i++)
      {
        if(min > a[i])
        {
          int temp = min;
          min = a[i];
          a[i] = temp;
        }
        a[j] = min;
      }
  }
  printf("%d\n", a[(n-1)/2]); //2.중앙값

  //3. 최빈값
  int first = a[0];
  int k=0;
  for (int i=0; i<n; i++)
  {
    if(first != a[i]) //뒤에 숫자가 다르면
    {
      k = i;
      b[k]++;
      first = a[i];
    }
    else //뒤에 숫자가 같으면
    {
      b[k] = b[k] + 1;
      first = a[i];
    }
  }

  int many=b[0]; //b[0]은 최소 1이다 b : 1 2 0 3 0 0 2 0 3 0 0
  int d=0;
  int important = 0;
  for (int d; d<n; d++)
  {
    if (many < b[d])
    {
      many = b[d]; //3
      important = d; //3
    }
  }
  for (int j=important+1; j<n; j++)
  {
    if(many == b[j])
    {
      important = j;
      break;
    }
  }
  printf("%d\n", a[important]); //3. 최빈값

  printf("%d\n", a[n-1]-a[0]); //4.범위

  return 0;
}
