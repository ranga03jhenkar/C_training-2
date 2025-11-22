#include <stdio.h>
enum months
{
    jan = 1,
    feb,march,april,may,june,july,aug,sep,oct,nov,dec
};

void main()
{
    enum months m;
    m = aug;
    char *season;
    switch(m)
    {
        case dec:case jan:case feb:
        season = "winter";break;
        case march:case april:case may:
        season = "summer";break;
        case june:case july:case aug:
        season = "mansoon";break;
        case sep:case oct:case nov:
        season = "spring";break;
    }
    printf("enter months %s",season);
}