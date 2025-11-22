//write a c programe which add three numbers call it by reference
#include <stdio.h>
void sum_ref(int *a,int *b,int *c)
{
    int sum = *a + *b + *c;
    printf("%d", sum);
}

void main()
{
    int a = 100;
    int b = 200;
    int c = 300;
    sum_ref(&a,&b,&c); 
}