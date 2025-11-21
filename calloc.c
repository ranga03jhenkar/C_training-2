#include <stdio.h>
#include <stdlib.h>
void main()
{
    float *p = (float*)calloc(4,sizeof(float));
    p[0] = 10.00;
    p[1] = 90.0;
    p[2] = 80.0;
    p[3] = 70.0;
    printf("%f%f%f%f",p[0],p[1],p[2],p[3]);
    free(p);
}