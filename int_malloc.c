#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p = (int*)malloc(4*sizeof(int));
    p[0] = 100;
    p[1] = 90;
    p[2] = 80;
    p[3] = 70;
    printf("%d",p[2]);
    free(p);
}