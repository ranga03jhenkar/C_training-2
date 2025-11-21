//CREAT a structer with a three variabler , maximum speed,price
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct CAR
{
    char name [100];
    float max_spd [100];
    int price ;
};

void main()
{
    int n;
    printf("enter name of CARS");
    scanf("%d",&n);
    struct CAR c[3];
    for(int i = 0; i<n; i++ )
    {
        printf("enter car name: ");
        scanf("%s",c[i].name);

        printf("enter maximum speed: ");
        scanf("%f",c[i].max_spd);

        printf("enter price of car: ");
        scanf("%d",&c[i].price);
    }
}