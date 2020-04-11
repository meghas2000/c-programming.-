#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int num;
  printf("enter the number:");
  scanf("%d",num);
  if(num>0)
  {
   
  printf("the number is positive");
  }
  if(num<0)
  {
    printf("the number is negative ");
  }
  if (num==0)
  {
    printf("the number is 0");
  }
  return 0;
}