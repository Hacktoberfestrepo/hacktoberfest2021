/* C program to create a process chain like P1->P2-> ... -> Pn
*/
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
void main()
{
    int n;  //n is a dynamically read input
    scanf("%d", &n);
    int i=0;
    while(i<n-1) //child of nth child process will terminate here as i< n cond. is failed
	{
	    pid_t p;
	    p = fork();
	    if(p>0)
	    {
	    	printf("\n\ti= %d :-\nmy pid = %d and my parent pid = %d\n",i, getpid(),getppid());
		    waitpid(p, 0, 0);
            break;
	    }
	    else
	    {
		    i++;
	    }
    }
}


