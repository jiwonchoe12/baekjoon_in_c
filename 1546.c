#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  double a[1000];
  for (int i=0; i<n; i++){
    scanf("%lf", &a[i]);
  }
  double max=a[0];
  for (int b=1; b<n; b++){
    if (max < a[b]){
      max=a[b];
    }
  }
  for (int c=0; c<n; c++){
    a[c]=a[c]/max*100;
  }
  double add=0;
  for (int d=0; d<n; d++){
    add += a[d];
  }
  printf("%.2lf", add/n);
  return 0;
}
