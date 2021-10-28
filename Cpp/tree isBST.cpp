#include<iostream>
#include<queue>

using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

class Tree
{
private:
	node* root;
public:
	Tree()
	{
		root = nullptr;
	}
	node* GetNewNode(int data)
	{
		node* temp = new node;
		temp->data = data;
		temp->right = nullptr;
		temp->left = nullptr;
		return temp;
	}
	node* Insert(node*Root,int value)
	{
		if (Root == nullptr)
		{
			Root = GetNewNode(value);	
		}
		else if(Root->data >= value)
		{
			Root->left = Insert(Root->left, value);
		}
		else
		{
			Root->right = Insert(Root->right, value);
		}
		return Root;
	}
	node* FindMin(node* Root)
	{
		if (root == nullptr)
		{
			cout << "\nTree is empty";
			return nullptr;
		}
		else if (Root->left == nullptr)
		{
			return Root;
		}
		return FindMin(Root->left);
	}
	node* FindMax(node* Root)
	{
		if (root == nullptr)
		{
			cout << "\nTree is empty";
			return nullptr;
		}
		else if (Root->right == nullptr)
		{
			return Root;
		}
		return FindMax(Root->right);
	}
	bool isSubtreeLesser(node* Root, int value)
	{
		if (Root == nullptr)
		{
			return true;
		}
		if (Root->data <= value && isSubtreeLesser(Root->left, Root->data) && isSubtreeLesser(Root->right, Root->data))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool isSubtreeGreater(node* Root, int value)
	{
		if (Root == nullptr)
		{
			return true;
		}
		if (Root->data > value && isSubtreeGreater(Root->left, Root->data) && isSubtreeGreater(Root->right, Root->data))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool isBSTUtil(node* Root, int Min, int Max)
	{
		if (Root == nullptr)
		{
			return true;
		}
		if (Root->data < Min || Root->data > Max)
		{
			return false;
		}
		return isBSTUtil(Root->left, Min, Root->data - 1) && isBSTUtil(Root->right, Root->data + 1, Max);
	}
	bool isBST(node* Root,int Min,int Max)
	{
		return isBSTUtil(Root, Min, Max);
	}
	void mainFunction()
	{
		int num,height;
		node* min,* max;
		root = Insert(root, 10);
		root = Insert(root, 16);
		root = Insert(root, 5);
		root = Insert(root, 4);
		root = Insert(root, 7);
		root = Insert(root, 1);
		root = Insert(root, 11);
		bool BST = isBST(root, min->data, max->data);
		if (BST == true)
		{
			cout << "\nThe tree is BST";
		}
		else
		{
			cout << "\nThe Tree is not BST";
		}
	}
};

int main()
{
	Tree t;
	t.mainFunction();
	return 0;
}