#include <stdio.h>
void main()
{
    int arr[3][3] ={ {7,8,5} , {4,7,3} ,{8,7,2} };
    for(int i=0;i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\n",arr[i][j]);
        }
    }
}