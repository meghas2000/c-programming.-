#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  
int marks;
printf("enter the marks:");
scanf("%d",&marks);
switch(marks/10)
{
  case 10:
    case 9:
    printf("the grade :A\n");
    break;
    case 8:
      printf("the grade:B\n");
      break;
    case 7:
      printf("the grade:C\n");
      break;
      case 6:
        printf("the grade:D\n");
        break;
       case 5:
         printf("the grade:E\n");
         break;
         case 4:
           printf("the grade:F\n");
           break;
           }

  return 0;
}