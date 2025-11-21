// write a c function which will acceptan array,it size as "n", and returns the difference b/w first and last element
#include <stdio.h>
#include <stdlib.h>
int sub_arr (int arr[], int n)
{
    int sub = arr[0]- arr[n-1];
    return abs(sub);
}
void main()
{
    int arr[5]={2,3,5,8,9};
    int n=5;
    printf("%d",sub_arr(arr,n));
}