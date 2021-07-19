/*#include <stdio.h>

int main(void)
{
  int a, b, c, mul;
  int count = 0;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  mul = a * b * c; // 2512
  int y[50];
  int i = 0;
  while(1){
    y[i] = mul % 10; // 2 1 5 2
    mul /= 10; //251 25 2 0
    if (mul == 0) break;
    i++;
  }
  for (int k= 0; k < 10; k++){
    count=0;
    for (i=0; i<9; i++){
      if (k==y[i])
      count += 1;
    }
    printf("%d\n", count);
  }
  return 0;
}
*/
#include <stdio.h>

int main(void)
{
  int a, b, c, mul;
  int count = 0;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  mul = a * b * c; // 2512
  int y[10] = {0,};
  while(1){
    y[mul % 10] += 1;  // 2 1 5 2
    mul /= 10; //251 25 2 0
    if (mul == 0) break;
  }
  for (int i=0; i<10; i++){
  printf("%d\n", y[i]);
  }
  return 0;
}
