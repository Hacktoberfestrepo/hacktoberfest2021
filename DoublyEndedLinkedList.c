#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
    /* data */
};
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main(){
    struct Node* head= (struct Node *)malloc(sizeof(struct Node));
    struct Node* N2= (struct Node *)malloc(sizeof(struct Node));
    struct Node* N3= (struct Node *)malloc(sizeof(struct Node));
    struct Node* N4= (struct Node *)malloc(sizeof(struct Node));
    
    head->data = 23;
    head->next = N2;
    head->prev = NULL;

    N2->data = 34;
    N2->prev = head;
    N2->next = N3;

    N3->data = 56;
    N3->prev = N2;
    N3->next = N4;

    N4->data = 52;
    N4->prev = N3;
    N4->next = NULL;

    linkedListTraversal(head);
}
