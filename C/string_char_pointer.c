
//Display string length using character pointers

#include <stdio.h>
int main()
{

    char str[100],i=0,*pt;
    printf("Enter a string: \n");
    scanf("%s",str);
    pt=str;
    while(*pt!='\0')
    {
    i++;
    pt++;


    }
    printf("\nLength of input string: %d",i);
    return 0;

}
