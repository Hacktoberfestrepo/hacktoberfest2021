#include<stdio.h>
#include<math.h>
int main(){
	int num,i,status=0;
	scanf("%d",&num);
	for(i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			status=1;
			break;
		}	
	}
	if(!status)
		 printf("Prime");
		else
		 printf("Not a prime");
	return 0;
}
