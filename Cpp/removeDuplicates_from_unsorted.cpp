#include<bits/stdc++.h>
using namespace std;
 
class node{
    public: 
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void removeDuplicates(node *start)
{
    unordered_set<int> seen;  // hash map
 
    node *curr = start;
    node *prev = NULL;
    while (curr != NULL)
    {
        if (seen.find(curr->data) != seen.end())
        {
           prev->next = curr->next;
           delete (curr);
        }
        else
        {
           seen.insert(curr->data);
           prev = curr;
        }
        curr = prev->next;
    }
}
 
void printList(node *head)
{
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data;
        cout<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;

}
 
int main()
{
    node* head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 12);
    insertAtTail(head, 11);
    insertAtTail(head, 11);
    insertAtTail(head, 12);
    insertAtTail(head, 11);
    insertAtTail(head, 10);

 
    printf("Linked list before removing duplicates : \n");
    printList(head);
 
    removeDuplicates(head);
 
    printf("\nLinked list after removing duplicates : \n");
    printList(head);
 
    return 0;
}