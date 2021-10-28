#include<stdio.h>
int main()
{
    int a,b,temp;
printf("enter two numbers");
scanf("%d %d",&a, &b);
temp=a;
a=b;
b=temp;
printf("a=%d,b=%d",a,b);
return(0);
}



