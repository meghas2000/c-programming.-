#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int day;
  printf("enter the day:");
  scanf ("%d",&day);
  switch(day)
  {
    case 1:
      printf("the day is Monday");
      break;
    case 2:
      printf("the day is Tuesday");
      break;
      case 3:
      printf("the day is Wednesday");
      break;
      case 4:
      printf("the day is Thursday");
     case 5:
      printf("the day is Friday ");
      break;
      case 6:
      printf("the day is Saturday ");
      break;
       case 7:
         printf("the day is Sunday ");
         break;
      default :
        printf("the day is invalid");
        break;
        }
  return 0;
}