#include <stdio.h>

//Compiler version gcc  6.3.0

int main(void){
/*input principle,rate and time*/  
  double P;
  double R;
  double T;
  double SI;
  printf("Enter principle :");
  scanf("%lf", &P);
  printf("Enter rate :");
  scanf("%lf", &R);
 printf("Enter time period:");
 scanf("%lf", &T);
 /* calculate simple interest */
   SI =(P*T*R)/100;
   /* print resultant of sample interest */
     printf("simple interest is %d", SI);
    return 0;
}