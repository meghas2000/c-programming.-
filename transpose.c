#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
 
int i, j, rows, columns, a[10][10], b[10][10];
  
 printf("\n Enter the number of rows and columns\n");
 scanf("%d %d", &i, &j);
 
 printf("\n Enter the Array elements \n");
 for(rows = 0; rows < i; rows++)
  {
   for(columns = 0;columns < j; columns++)
    {
      scanf("%d", &a[rows][columns]);
    }
  }
 
 //Transpose of matrix 
 for(rows = 0; rows < i; rows++)
  {
   for(columns = 0;columns < j; columns++)
    {
      b[columns][rows] = a[rows][columns];
    }
  }

 printf("\n Transpose matrix elements are: \n");
 for(rows = 0; rows < j; rows++)
  {
   for(columns = 0; columns < i; columns++)
    {
      printf("%d \t ", b[rows][columns]);
    }
    printf("\n");
  }
 
return 0;
} 