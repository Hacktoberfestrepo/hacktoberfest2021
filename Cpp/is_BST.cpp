#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

node *CreateTree()
{
    string v;
    cin >> v;
    
    if (v == "n")
    {
        return NULL;
    }
    
    int w=stoi(v);
    node *root = new node(w);
    root->left = CreateTree();
    root->right = CreateTree();
    return root;
}


  
  void display(node *root) {
    if(root==NULL)
    {
      return;
    }

    string str = "";
    str += (root->left) == NULL ? "." : to_string(root->left->data) + "";
    str += " <- " + to_string(root->data) + " -> ";
    str += (root->right) == NULL ? "." : to_string(root->right->data) + "";
    cout<<str<<endl;

    display(root->left);
    display(root->right);
  }
  
  
bool isBSTUtil(node *root, node *&prev) 
{ 
    // traverse the tree in inorder fashion and  
    // keep track of prev node 
    if (root) 
    { 
        if (!isBSTUtil(root->left, prev)) 
          return false; 
   
        // Allows only distinct valued nodes  
        if (prev != NULL && root->data <= prev->data) 
          return false; 
   
        prev = root; 
   
        return isBSTUtil(root->right, prev); 
    } 
   
    return true; 
} 
  
bool isBST(node *root) 
{ 
   node *prev = NULL; 
   return isBSTUtil(root, prev); 
}

int main()
{
    int p;cin>>p;
    node *root = CreateTree();
    //BSTPair p = isBST(root);
      if (isBST(root)) 
        cout << "true"; 
    else
        cout << "false"; 
}
