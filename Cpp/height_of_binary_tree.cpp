#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
    Node() : val(0), left(nullptr), right(nullptr) {}
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
    Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    static int maxDepth(Node *root, int level)
    {
        if (root == NULL)
            return level;

        return max(maxDepth(root->left, level + 1), maxDepth(root->right, level + 1));
    }

    static int maxDepth(Node *root)
    {

        return maxDepth(root, 0);
    }
};

int main()
{
    //root = [ 3, 9, 20, null, null, 15, 7 ];

    Node *tree = new Node(3, new Node(9), new Node(20, new Node(15), new Node(7)));

    cout << Solution::maxDepth(tree);
}