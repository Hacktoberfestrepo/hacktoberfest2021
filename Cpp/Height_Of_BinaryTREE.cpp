#include <iostream>
#include <algorithm> 
using namespace std;

// Define the structure for a binary tree node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to calculate the height of a binary tree
int heightOfBinaryTree(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }

    // Recursively calculate the height of the left and right subtrees
    int leftHeight = heightOfBinaryTree(root->left);
    int rightHeight = heightOfBinaryTree(root->right);

    // The height of the tree is the maximum of the left and right subtree heights, plus 1 for the root node
    return max(leftHeight, rightHeight)+1;
}

int main() {
    // Create a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Calculate and print the height of the binary tree
    int height = heightOfBinaryTree(root);
    cout << "Height of the binary tree is: " << height << endl;
return 0;
}
