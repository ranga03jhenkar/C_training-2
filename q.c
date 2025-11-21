// write a function which accept two input parameters x,y and returns x^2 +y^2
#include <stdio.h>
int myadd (int x,int y)
{
    int sum = x*x +y*y;
    return sum;
}
void main ()
{
    int x=10;
    int y=20;
    printf("%d\n",myadd (x,y));
}