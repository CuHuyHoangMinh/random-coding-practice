#include "stdio.h"
#include "ctype.h"
#include "math.h"
#include "string.h"
void swap(int *px,int *py) {
  int temp;
  temp=*px;
  *px=*py;
  *py=temp;
}

int main()
{
  int a=3, b=5;
  swap(&a,&b);
  printf("%d %d\n",a,b );

  // a=(a>b)? a:d;
  return 0;
}
