#include <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
  char name[20];
  printf("Enter your name:");
  fgets(name,20,stdin);
  printf("name of the student is %s",name);
  double num1;
  double num2;
  printf("Enter your geography mark: ");
  scanf("%lf",&num1);
  printf("Enter your history mark: ");
  scanf("%lf",&num2);
  printf("Average mark of the studentis %f",(num1+num2)/2);
   
  return 0;
}