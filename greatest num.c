#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int num1,num2,num3;
  printf("enter three number:");
  scanf("%d,%d,%d",&num1,&num2,&num3);
  if((num1>num2 && num1>num3))
  printf("num1 is the greatest number\n");
  else if(num2>num1 && num2>num3)
  printf("num2 is the greatest number\n");
  else
  printf("num3 is the greatest" );
  return 0;
  
}