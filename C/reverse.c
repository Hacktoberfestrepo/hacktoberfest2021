#include <stdio.h>
#include <string.h>

#define MAX 100	

int top=-1, item, i, stack[MAX];
void push();
char pop();
 
int main()
{
    char str[MAX];
    printf("Enter a number: ");
    scanf("%s", &str);
    
    for(i=0;i<strlen(str);i++)
        push(str[i]);
        
    for(i=0;i<strlen(str);i++)
        str[i]=pop();

    printf("Reversed number is: %s\n", str);
    return 0;
}
 
void push(int ele)
{
    if(top==MAX-1)
    {
        printf("Stack OVERFLOW\n");
    }
    else
    {
        top++;
        stack[top]=ele;
    }
}
 
char pop()
{
    if(top==-1)
    {
        printf("Stack EMPTY\n");
    }
    else
    {
        item = stack[top];
        top=top-1;
        return item;
    }    
}
 
