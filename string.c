#include <stdio.h>
#include <string.h>
void main ()
{
    char name [10] = "jhenkar";
    char new[900] = "good morning";
    printf("%c\n",name[3]);
    printf("length of the string is %ld\n", strlen(name));
    strcat(new, name);
    printf("%s\n",new);
    printf("%d",strstr(new, "good"));
    
    if((strstr(new,"good"))!= NULL)
    {
        printf("found");
    }

}                                                                                                                                                                                                                                                                                                                                                                 