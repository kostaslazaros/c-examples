#include <stdio.h>
#include <stdlib.h>


float cubicpower(float *pntr){
   return *pntr = *pntr * *pntr * *pntr;
}

int main()
{
 float number;
 printf("Enter a number here: ");
 scanf("%f", &number);
 cubicpower(&number);
 printf("The cubic power of the given number is: %.2f", number)     ;
 return 0;
}
 
