//write a function wihich will multiply three numbers and call it by reference
#include <stdio.h>
void prod_ref (int *a,int *b, int *c)
{
    int product = (*a) * (*b) * (*c);
    printf("%d\n",product);
}

void main()
{
    int a = 90;
    int b = 100;
    int c = 110;
    prod_ref(&a,&b,&c);
}