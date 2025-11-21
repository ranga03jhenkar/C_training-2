#include <stdio.h>
void main()
{
    int arr[4] = {56,75,85,76};
    int  *p =arr ;
    printf("%d\n",*p);
    printf("%d\n",*(p+1));
}