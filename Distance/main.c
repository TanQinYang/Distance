#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 double a;
 printf("input x1 value");
 scanf("%lf",&a);
 double b;
 printf("input y1 value");
 scanf("%lf",&b);
 double c;
 printf("input x2 value");
 scanf("%lf",&c);

 double d;
 printf("input y2 value");
 scanf("%lf",&d);

double e=sqrt((a-c)*(a-c)+(b-d)*(b-d));
 printf("%4lf",e);
 return 0;
}
