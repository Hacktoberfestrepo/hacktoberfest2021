#include <iostream>
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
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data;
        cout<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
node* removeDuplicates(node* &head){
    node* currptr = head;
    node* next_next;

    while(currptr->next != NULL){
        if(currptr->data == currptr->next->data){
            next_next = currptr->next->next;
            free(currptr->next);
            currptr->next = next_next;
        }
        else{
            currptr = currptr->next;
        }
    }
    return head;
}

int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 5);
    insertAtTail(head, 7);
    display(head);
    cout<<endl;
    node* newhead = removeDuplicates(head);
    display(newhead);

return 0;
}