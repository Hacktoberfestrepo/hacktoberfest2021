#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int x;
        node *left;
        node *right;
};
int height{node * head}{
    if(head==NULL){
        return 0;
    }else{
        int l=height(head->left);
        int r=height(head->right);
        if(l>r){
            return l+1;
        }else{
            return r+1;
        }
    }
}
node *create(int a){
    node * head=new node();
    head->x=a;
    head->left=NULL;
    head->right=NULL;
    return node;
}
int main(){
    node *head=create(10);
    head->right=create(20);
    head->left=create(30);
    head->right=create(40);
    head->left=create(50);
    head->right=create(60);
    head->left=create(70);
    head->left=create(80);
    head->left=create(90);
    cout<<"Height of the binary tree formed : "<<height(head)<<endl;
}
