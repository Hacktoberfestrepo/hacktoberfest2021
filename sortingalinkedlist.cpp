//this a program that sorts a linked list using bubble sort algorithm
//complexity: O(n)
#include<bits/stdc++.h>
using namespace std;
class node
{
    public: 
    int data;
    node* next;
    node(int val) 
    {
        this->data=val;
        next=NULL;
    }
};
node* insertinginlist(node* head)
{
    node* temp=head;int c=1,i=1,val;
    while(c!=0)
    {
        cout<<"ENTER DATA OF NODE "<<i<<" : ";
        cin>>val;
        node* newnode=new node(val);
        temp->next=newnode;
        temp=newnode;
        cout<<"IF YOU WANT TO ADD MORE NODES ENTER 1 ELSE ENTER 0: ";
        cin>>c;
        i++;
    }
    head=head->next;
    return head;
}
void sortlist(node* head)
{
    //node* i=head;node *j=head->next;
    for(node* i=head;i->next!=NULL;i=i->next)
    {
        for(node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->data>j->data)
            {
                int swap=i->data;
                i->data=j->data;
                j->data=swap;
            }
        }
    }    
}
void printlist(node* head)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data;
}
int main()
{
    node* head=new node(0);
    head=insertinginlist(head);
    printlist(head);
    sortlist(head);
    cout<<endl;
    printlist(head);
}
