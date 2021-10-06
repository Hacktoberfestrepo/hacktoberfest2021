#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int front=0,rear=0;
int queue[CAPACITY];
void isempty()
{
    if(front==rear)
    {
        printf("\nQUEUE IS EMPTY,YOU CANNOT DELETE ELEMENTS\n");
    }
    else{
        printf("\n QUEUE IS NOT EMPTY,YOU CAN DELETE\n");
    }
}
void isfull()
{
    if(rear==CAPACITY)
    {
        printf("OVERFLOW,YOU COULD NOT INSERT ELEMENTS");
    }
    else{
        printf("QUEUE IS NOT FULL,YOU CAN INSERT ELEMENTS");
    }
}
  /* INSERTING ELEMENT IN QUEUE */
void enqueue()
{
    int ele;
    printf("ENTER THE ELEMENT TO INSERT IN QUEUE: ");
    scanf("%d",&ele);
    if(rear==CAPACITY)
    {
        printf("\nERROR, PLEASE STOP INSERTING QUEUE IS FULL\n");
    }
    else
    {
        queue[rear]=ele;
        rear++;
    }
}
    /* DELETING ELEMENT FROM QUEUE */
void dequeue()
{
    int i;
    if(front==rear)
        printf("QUEUE IS EMPTY\n");
    else
    {
        printf("DELETED ELEMENT IS: %d\n",queue[front]);
        for(i=0;i<rear-1;i++)
        {
            queue[i]=queue[i+1];
        }
        rear--;
    }
}
    /* TRAVERSE ELEMENT OF QUEUE */
void traversequeue()
{
    int i;
    if(front==rear)
        printf("QUEUE IS EMPTY\n");
    else
    {
        printf("\nELEMENTS OF QUEUE ARE: ");
        for(i=0;i<rear;i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
    /* MAIN FUNCTION */
int main()
{
    int ch;

    while(1)
    {
        printf("\n1. insert element in queue");
        printf("\n2. delete element from queue");
        printf("\n3. display the element of queue");
        printf("\n4. To check if queue is empty");
        printf("\n5. To check if queue is Full");
        printf("\n6. quit the loop\n");
        printf("\nPLEASE ENTER YOUR CHOICE: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            traversequeue();
            break;
        case 4:
            isempty();
            break;
        case 5:
            isfull();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("\nPLEASE ENTER A VALID CHOICE\n");
        }
    }
}

// Contributed by Abhijeet Anand