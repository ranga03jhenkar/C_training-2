//write a c function which will accept one input parameter r and returns the peremeter o circle,declere pi as constent
#include <stdio.h>
float parimeter (int r)
{
    const float pi=3.142;
    float pare = 2*pi*r;
    return pare;
}
void main()
{
    int r=10;
    printf("%f",parimeter(r));
}