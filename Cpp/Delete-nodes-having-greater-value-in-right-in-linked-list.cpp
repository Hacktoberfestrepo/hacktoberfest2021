/*
Given a singly linked list, remove all the nodes which have a greater value on its following nodes.

Input:

LinkedList = 12->15->10->11->5->6->2->3

Output: 

LinkedList = 15->11->6->3
*/

#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}




Node*reverse(Node*head){
    if(head==NULL){
        return head;
    }
    Node*p=head;
    Node*q=NULL;
    Node*t=NULL;
    while(p!=NULL){
        t=p->next;
        p->next=q;
        q=p;
        p=t;
    }
    head=q;
    return head;
}
Node *compute(Node *head){
    if(head==NULL){
        return head;
    }
    head=reverse(head);
    int maxx=head->data;
    Node*p=head;
    Node*last=NULL;
    while(p!=NULL){
        if(p->data < maxx){
            Node*q=p;
            last->next=p->next;
            p=p->next;
            delete(q);
        }
        else{
            maxx=max(maxx,p->data);
            last=p;
            p=p->next;
        }
    }
    head=reverse(head);
    return head;
}
int main()
{
    int T;
    cout<<"Enter number of testcases: ";
	cin>>T;

	while(T--)
	{
		int K;
		cout<<"Enter number of elements in linked list: ";
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
        
        cout<<"Enter elements: ";
		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        
        Node *result = compute(head);
        cout<<"Resultant linked list is:  ";
        print(result);
        cout<<endl;
    }
}

