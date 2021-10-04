
#include<bits/stdc++.h>

using namespace std;

struct Node

{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = new Node(val);
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}




int getCountOfNode(Node *root, int l, int h)
{

    if (!root) return 0;


    if (root->data == h && root->data == l)
        return 1;

    if (root->data <= h && root->data >= l)
         return 1 + getCountOfNode(root->left, l, h) +
                    getCountOfNode(root->right, l, h);

    else if (root->data < l)
         return getCountOfNode(root->right, l, h);


    else return getCountOfNode(root->left, l, h);
}


bool isDeadEnd(Node *root);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;

        root = NULL;

        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);

        }

        
     cout<<isDeadEnd(root);
     cout<<endl;
    }
}




/*You are required to complete below method */
void inorder(unordered_map<int, int>& leaf,unordered_map<int, int>&  nodes, Node* root)
{
    if(root)
    {
        inorder(leaf, nodes,root->left);
        if(!root->left && !root->right)
            leaf[root->data]=1;
        nodes[root->data]=1;
        inorder(leaf, nodes, root->right);
    }
}
bool isDeadEnd(Node *root)
{
    //What we do is check for every leaf node that if nodeval-1 and nodeval+1 exists or not
    unordered_map<int, int> leaf, nodes;
    inorder(leaf, nodes,root);
    nodes[0]=1;
    for(auto i : leaf)
    {
        if( nodes[i.first-1]==1 && nodes[i.first+1]==1)
            return true;
    }
    return false;
}

// IP:
// 1
// 16
// 60 80 82 105 20 92 21 108 66 109 48 111 25 59 1 65
 
// OP: 0