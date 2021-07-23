#include <stdio.h>

int main(void)
{
  int a[1000000];
  int n;
  scanf("%d", &n);

  for (int i = 0; i<n; i++){
    scanf("%d", &a[i]);
  }
  int min = a[0];
  for (int i = 1; i<n; i++){
    if (min > a[i]){
      min = a[i];
    }
  }
  int max = a[0];
  for (int i = 1; i<n; i++){
    if (max < a[i]){
      max = a[i];
    }
  }
    printf("%d", min);
    printf(" %d", max);
}
