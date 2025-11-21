#include <stdio.h>
int myadd (int a, int b)
{
    int sum = a+b;
    return sum;
}
void main ()
{
    int a=90, b=80;
    printf("%d\n",myadd(a,b));
    int c=40,d=50;
    printf("%d\n",myadd(c,d));
}