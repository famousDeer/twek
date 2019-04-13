#include "pch.h"
#include <conio.h>
#include <math.h>

int main()
{
int x;
float k,result;
printf("The basic of power: ");
scanf("%d",&x);
printf("\nExponent: ");
scanf("%d",&k);
result = pow(x,k);
printf("\nResult of power: %f");
_getche();
return 0;
}
