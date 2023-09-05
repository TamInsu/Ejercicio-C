
\X = (a + b) / (a - b).
#include <stdio.h>
#include <math.h>
int main()
{
float a=0,b=0,x=0;
printf("dame valor de a:\n");
scanf("%f", &a);
printf("dame valor de b:\n");
scanf("%f", &b);
x=(a+b)/(a-b);
printf("El resultado es %.2f",x);
}