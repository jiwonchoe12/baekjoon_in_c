#include <stdio.h>

int main(void)
{
  int y[42] = {0,};
  int count = 0;
  int k;
  for(int i = 0; i<10; i++){
    scanf("%d", &k);
    y[k%42] += 1;
  }
  for(int a = 0; a<42; a++){
    if (y[a] != 0){
      count += 1;
    }
  }
  printf("%d", count);
  return 0;
}
