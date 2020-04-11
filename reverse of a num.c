#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int m;
  int rev;
  int reminder;
  printf("enter the num:");
  scanf("%d",&m);
  while(m!=0)
  {
    reminder=m%10;
    rev=rev*10+reminder;
    m/=10;
  }
  printf("reverse no is %d",rev);
  return 0;
}