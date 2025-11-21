// write a c function which will accept 3 parameters l,b,h and returns volume of cube (l*b*h)
#include <stdio.h>
int volume (int l, int b, int h)
{
    int volume=l* b* h;
    return volume;
}
void main ()
{
    int l=3;
    int b=4;
    int h=6;
    printf("%d", volume(l,b,h));
}