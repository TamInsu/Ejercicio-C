#include <stdio.h>

int main()
{
   float euros=0,dolares=0;
   //1 euro son 1.05dolares//
   printf("Dime los euros:\n");
   scanf("%f", &euros);
   dolares=euros*1.05;
   printf("%.2f euros son %.2f dolares", euros,dolares);
}
