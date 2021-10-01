// linked list data structure complete codes are here to insert a node , to delete
//a node and to merge 2 linked list ...and some advanced functions..

#include <iostream>
using namespace std;
class node{
    public:
    int data; node* next;
    node(int val){data = val; node*next = NULL;}
};
void insertAtLast(int val,node* &head){
    node* n = new node(val);
    if(head==NULL){head = n;return;}
    node* temp = head;
    while(temp->next){temp = temp->next;}
    temp->next = n;
    return;
}
void display(node * head){
    node* p = head;
    while(p){cout<<p->data<<"->";p = p->next;}
    cout<<"NULL";
    return;
}
void reverse(node* head){
    node* nextptr;
    node* curr = head;
    node* prev = NULL;
    while(curr!=NULL){
        nextptr = curr->next;
        curr->next = prev;
        
        prev = curr;
        curr = nextptr;
    }
    head = prev;
    node *p = head;
    while(p){
        cout<<p->data<<"->";
        p = p->next;
    }cout<<"NULL";
    return;
}
void concatenatelists(node* &head,node* &second){
    node* p = head;
    while(p->next){
        p = p->next;
    }
    p->next = second;
}
node* mergelists(node* &head,node* &second){
 node* third; node* last;
 if(head->data<second->data){third=head;last = head;
 head = head->next;last->next=NULL;}
 else{third = second;last = second;second = second->next;last->next = NULL;}
 while(second!=NULL && head!=NULL){
if(second->data<head->data){last->next=second;last = second;second=second->next;
    last->next=NULL;
}
else{last->next = head;last=head;head=head->next;last->next = NULL;}
 }
 if(head!=NULL){last->next = head;}
 else{last->next = second;}
 return third;
}
node* reverseknodes(node* &head,int k){
    int count = 0; node* prev = NULL; node* curr = head; node* nextptr;
    while(count<k && curr!=NULL){
        nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
        count++;
    }
    if(nextptr!=NULL){
    head->next = reverseknodes(nextptr,k);}
    return prev;
}
 bool hasCycle(node *head) {
        node *fast=head; ListNode *slow=head;
        if(head == NULL || head->next == NULL){return false;}
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow){return true;}
    }
        return false;
    }

int main() {
	node* head = NULL;
	insertAtLast(1,head);
	insertAtLast(2,head);
	insertAtLast(5,head);
	insertAtLast(6,head);
  node* second = NULL;
  insertAtLast(0,second);
  insertAtLast(3,second);
  insertAtLast(10,second);
  node* ans = reverseknodes(head,2);
  display(ans);
	return 0;
}
