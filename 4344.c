#include <stdio.h>

int main(void)
{
  int c;
  scanf("%d", &c);
  int a[1000];
  for (int b=0; b<c; b++){
    int add=0;
    double result=0;
    double num=0;
    int n; //명 수
    scanf("%d", &n);
    for (int d=0; d<n; d++){
      scanf("%d", &a[d]);
      add += a[d];
    }
    result = add / n; //평균
    for (int k=0; k<n; k++){
      if(result<a[k]){
        num += 1;
      }
    }
    printf("%.3lf%%\n", num/n*100);
  }
  return 0;
}
