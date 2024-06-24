#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
struct node
{
  long long int key;
  struct node *left, *right;
};

struct node *newNode(long long int item)
{
  struct node *temp = new node;
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

void inorder(struct node *root)
{
  if (root != NULL)
  {
    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
  }
  cout << endl;
}

struct node *insert(struct node *node, long long int key)
{
  if (node == NULL)
  {
    return newNode(key);
  }
  if (key < node->key)
  {
    node->left = insert(node->left, key);
  }
  else if (key > node->key)
  {
    node->right = insert(node->right, key);
  }
  return node;
}

int search(struct node *root, long long int key)
{
  if (root->key == key)
  {
    return 1;
  }
  else if (root->key < key)
  {
    return search(root->right, key);
  }
  else
  {
    return search(root->left, key);
  }
}

struct node *minValueNode(struct node *node)
{
  struct node *current = node;
  while (current && current->left != NULL)
    current = current->left;
  return current;
}

struct node *deleteNode(struct node *root, long long int key)
{
  if (root == NULL)
  {
    return root;
  }
  if (key < root->key)
  {
    root->left = deleteNode(root->left, key);
  }
  else if (key > root->key)
  {
    root->right = deleteNode(root->right, key);
  }
  else
  {
    if (root->left == NULL)
    {
      struct node *temp = root->right;
      free(root);
      return temp;
    }
    else if (root->right == NULL)
    {
      struct node *temp = root->left;
      free(root);
      return temp;
    }
    struct node *temp = minValueNode(root->right);
    root->key = temp->key;
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}

int main()
{
  long long int n, n1, a, i, t;
  cout << "currently the tree is empty....." << endl;
  cout << "the value of operations are shown below" << endl;
  cout << "inserting the value into tree = 1" << endl;
  cout << "deleting the value in the tree =2" << endl;
  cout << "searching for the value in the tree = 3" << endl;
  cout << "printing the tree in inorder method = 4" << endl;
  struct node *root = NULL;
  long long int x, d, s;
  while (1)
  {
    cout << "enter the value of operation to be performed" << endl;
    cin >> x;
    if (x == 1)
    {
      cout << "enter the element to be added in the tree" << endl;
      cin >> a;
      if (root == NULL)
      {
        root = insert(root, a);
      }
      else
      {
        insert(root, a);
      }
    }

    if (x == 2)
    {
      cout << "enter the valid value to be deleted in the tree" << endl;
      cin >> d;
      root = deleteNode(root, d);
    }
    if (x == 3)
    {
      cout << "enter the element to be searched in the tree" << endl;
      cin >> s;
      t = search(root, s);
      if (t == 1)
        cout << "element found in the array" << endl;
      else
        cout << "element not found" << endl;
    }
    if (x == 4)
    {
      inorder(root);
    }
    if (x == 5)
    {
      break;
    }
  }
  return 0;
}
