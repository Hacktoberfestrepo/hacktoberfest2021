#include<stdio.h>
#include<stdlib.h>

int A(int x, int y)
{
	if(x==0)
	    return y+1;
	else if (y==0)
	    return A(x-1,1);
	else
	    return(A(x-1,A(x,y-1)));
}

int main()
{
	system("cls");
	int x,y;
	printf("Enter value of x & y saperated by commas: ");
	scanf("%d,%d",&x,&y);
	printf("The ans is: %d",A(x,y));
	return 0;
}
