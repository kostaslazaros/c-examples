//Everything all and good wines



#include <stdio.h>
#include <stdlib.h>


int factorial(int number, int i)
{
    int fac = 1;
    printf("Give me a number: ");
    scanf("%i",&number);
    for(i = 0; i <= number; i++){
        fac = fac * (number - 1);
    }
    printf("The factorial is %i", fac);
    return 0;
}





int main()
{
 int a;
 int n;
 int j;

 factorial(a, j);

 return 0;
}
