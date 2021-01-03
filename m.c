#include "stdio.h"
#include "ctype.h"
#include "math.h"
#include "stdlib.h"
#include "string.h"
//#include "sstream"
struct complexnum
{
  int complex;
  int real;
};

struct complexnum add(struct complexnum x,struct complexnum y)
{
  struct complexnum ans;
  ans.complex=x.complex+y.complex;
  ans.real=x.real+y.real;
  return ans;
}

int convertInt(char s[])
{
  int  ans=0;
  int count=0;
  while (s[count]!='\0') {
    /* code */
    int i= s[count];
    ans=ans*10+(i-48);
    count++;
  }
  return ans;




}

int fact(int n)
{
  if (n==0)
    return 1;
  else
    return n*fact(n-1);
}
int main(int agrc, char *agrv[] )
{

  struct complexnum a,b,c;
  a.complex=1;
  a.real=2;
  b.complex=2;
  b.real=4;
  c=add(a,b);
  char *init=agrv[1];
//  char *temp=agrc;
  printf("%d %d\n",c.complex,c.real );
  printf("%d\n",fact(5) );
  printf("%d   %s\n",agrc, agrv[2] );
  printf("%d\n", strlen(agrv

    [1]));
  if (*agrv[2] == '+')
  {
    int ans=atoi(agrv[1])+atoi(agrv[3]);
    printf("%d %d\n", convertInt(agrv[1]) ,convertInt(agrv[3] ) );
    printf("%d\n",ans);
  }


  // int count=0;
  // char num1[256];
  // char num2[256];
  // char sign;
  //
  //   while (agrs[count]!=' '&& args[count]!='\0')
  //   {
  //     num1[count]=args[count];
  //     count++;
  //   }
  //   int temp=0;
  //   while (agrs[count]!=' '&&agrs[count]!='\0') {
  //     sign=agrs[count];
  //   }
  //   while (agrs[count]!=' '&&agrs[count]!='\0') {
  //     num2[temp]=agrs[count];
  //     temp++;
  //     count++;
  //   }

  return 0;
}
