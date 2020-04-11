#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int basic;
  int netsalary ;
  int da;
  int ta;
  printf("enter the basic salary:");
  scanf("%d",&basic );
  da=(10*basic)/100;
  ta =(12*basic)/100;
  netsalary=basic+da+ta;
  printf("\n netsalary:%d",netsalary);
  return 0;
}