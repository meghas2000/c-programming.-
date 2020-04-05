#include <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
  int age;
  printf("Enter the age:");
  scanf("%d",&age);

  
  if (age>=60)
  {
    printf("the pension of 10000 rupees is allowed");
  }
  
  else if(age>=50 && age<60)
  {
    printf("the pension of 5000 rupees is allowrd");
  }
  else if(age<50)
  {
   
  printf("the pension of 0 rupees is allowed");
  }
  else
  {
    printf("invalid");
  }
  return 0;
}