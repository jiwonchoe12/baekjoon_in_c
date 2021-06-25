//10952
/*#include <stdio.h>

int main(void)
{
  int a, b;
  while ((a != 0) && (b != 0)){
      scanf("%d" "%d", &a, &b);
      printf("%d", a+b);
  }
  return 0;
}
*/

#include <stdio.h>

int main(void)
{
  int a, b;
  while(1){
    scanf("%d %d", &a, &b);
    if (a==0 && b==0) break;
    printf("%d\n", a+b);
  }
}
