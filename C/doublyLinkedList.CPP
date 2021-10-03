#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*start,*end,*temp;

void end_insert()
{
    int n;
    printf("\nenter any value:  ");
    scanf("%d",&n);
    temp=(node*)malloc(sizeof(struct node));
    temp->data=n;
    temp->next=NULL;
    if(end==NULL)
	start=end=temp;
    else
    {
	end->next=temp;
	temp->prev=end;
	end=temp;
    }
}

void start_insert()
{
    int n;
    printf("\nenter any value:  ");
    scanf("%d",&n);
    temp=(node*)malloc(sizeof(struct node));
    temp->data=n;
    temp->next=NULL;
    temp->prev=NULL;
    if(start==NULL)
	start=end=temp;
    else
    {
	temp->next=start;
	start->prev=temp;
	start=temp;
    }


}


void start_del()
{
    if(end==NULL)
	printf("\nempty\n");
    else
    {
	printf("\nDeleted element %d",start->data);
	start=start->next;
	start->prev=NULL;

    }
}

void end_del()
{
    if(end==NULL)
	printf("\nempty\n");
    else
    {
	 printf("\nDeleted element %d",start->data);
	 end=end->prev;
	 end->next=NULL;

    }
}

void display()
{
     temp=(node*)malloc(sizeof(struct node));
     temp=start;
     if(end==NULL)
	printf("\nempty\n");
     else
     {
	 while(temp!=NULL)
	 {
	     printf("%d ",temp->data);
	     temp=temp->next;
	 }
	 printf("\n");
     }
}


int main()
{   clrscr();
    end=start=NULL;
    int ch;
    printf("\n1.insert at start\n");
    printf("2.insert at end\n");
    printf("3.delete at start\n");
    printf("4.delete at end\n");
    printf("5.display\n");
    printf("6.Exit\n");
      while (1)
      {	printf("\nEnter your choice : ");
	scanf("%d", &ch);
	switch (ch)
	{
	    case 1:
			 start_insert();
                 break;
            case 2:
                 end_insert();
                 break;
            case 3:
                 start_del();
                 getch();
                 break;
            case 4:
                 end_del();
                 getch();
                 break;
            case 5:
            	display();
            	getch();
            	break;
            case 6:
            	exit(1);
            default:
           	 printf("Wrong choice \n");
           	 getch();
        }
    }

}
