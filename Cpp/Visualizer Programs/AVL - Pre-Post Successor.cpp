#include <iostream>
#include <stdlib.h>
#include <SFML/Graphics.hpp>

sf::RenderWindow window(sf::VideoMode(1377, 768), "AVL");

using namespace std;
struct node
{
    int data, height;
    node *left = NULL;
    node *right = NULL;
    node *parent = NULL;
};
node *rootNode = NULL;
node *createnode(const int &data)
{
    node *tempnode;
    tempnode = new node;
    tempnode->data = data;
    return tempnode;
}
class AVL
{
    int x = 50, y = 10, data = 0;
    sf::Font font;
    sf::Text text;
    sf::RectangleShape line, rect;
    sf::CircleShape circle;
    node *preSuccessor, *successor;
    inline int height(node *tempNode)
    {
        if (tempNode != NULL)
            return (max(height(tempNode->left), height(tempNode->right)) + 1); // ? Returining the largest height
        return 0;
    }
    inline int heightDifference(node *tempNode)
    {
        if (tempNode != NULL)
            return (height(tempNode->left) - height(tempNode->right)); // ? Returning the balance between the 2 heights
        return 0;
    }
    // NOTE Double Rotations
    node *lrRotation(node *parentNode)
    {
        node *tempNode = parentNode->left;
        parentNode->left = rrRotation(tempNode);
        node* tempNode2 =llRotation(parentNode);
        createNotification("Left Right Rotation!", 50, 80, window.getSize().y);
        return tempNode2;
    }
    node *rlRotation(node *parentNode)
    {
        node *tempNode = parentNode->right;
        parentNode->right = llRotation(tempNode);
        node* tempNode2 =rrRotation(parentNode);
        createNotification("Right Left Rotation!", 50, 80, window.getSize().y);
        return tempNode2;
    }
    // NOTE Single Rotations
    inline node *rrRotation(node *parentnode)
    {
        node *tempnode = parentnode->right;
        parentnode->right = tempnode->left; // ? Assuming that maybe there's a left node in the parent's right
        tempnode->left = parentnode;
        createNotification("Right Right Rotation!", 50, 80, window.getSize().y);
        return tempnode;
    }
    inline node *llRotation(node *parentnode)
    {
        node *tempnode = parentnode->left;
        parentnode->left = tempnode->right; // ? Assuming that maybe there's a right node in the parent's left
        tempnode->right = parentnode;
        createNotification("Left Left Rotation!", 50, 80, window.getSize().y);
        return tempnode;
    }
    node *balanceTree(node *rootNode)
    {
        int balanceFactor = heightDifference(rootNode);
        // NOTE Left Side Balancing
        if (balanceFactor > 1)
        {
            if (heightDifference(rootNode->left) > 0)
                rootNode = llRotation(rootNode);
            else
                rootNode = lrRotation(rootNode);
        }
        // NOTE Right Side Balancing
        else if (balanceFactor < -1)
        {
            if (heightDifference(rootNode->right) > 0)
                rootNode = rlRotation(rootNode);
            else
                rootNode = rrRotation(rootNode);
        }
        return rootNode;
    }
    node *insertnode(node *traversenode, const int &data)
    {
        if (traversenode == NULL) // ? For Leaf node
        {
            traversenode = createnode(data);
            return traversenode;
        }
        else if (data < traversenode->data) // ? For Left node
        {
            traversenode->left = insertnode(traversenode->left, data);
            traversenode = balanceTree(traversenode);
        }
        else if (data > traversenode->data) // ? For Right node
        {
            traversenode->right = insertnode(traversenode->right, data);
            traversenode = balanceTree(traversenode);
        }
        traversenode->parent = traversenode;
        return traversenode;
    }
    void findPreSuc(node *traverseNode, const int &data)
    {
        if (traverseNode == NULL)
            return;
        if (traverseNode->data == data) // ? Checking if the root node has the data
        {
            if (traverseNode->left != NULL) // ? Assuming Left is present and most probably has the bigger value
            {
                node *tempNode = traverseNode->left;
                while (tempNode->right)
                    tempNode = tempNode->right;
                preSuccessor = tempNode;
            }
            if (traverseNode->right != NULL) // ? Assuming the right is present and most probably has the smaller value
            {
                node *tempNode = traverseNode->right;
                while (tempNode->left)
                    tempNode = tempNode->left;
                successor = tempNode;
            }
            return;
        }
        if (traverseNode->data > data) // ? After going through above checking the root node, if it has bigger data
        {
            successor = traverseNode;
            findPreSuc(traverseNode->left, data);
        }
        else // ? least condition is that the root node may have the smallest data
        {
            preSuccessor = traverseNode;
            findPreSuc(traverseNode->right, data);
        }
    }
    node *deletenode(node *rootNode, const int &data)
    {
        // NOTE Same As BST Implementation
        if (rootNode == NULL)
            return rootNode;

        if (data < rootNode->data) // ? If data Smaller than the Root Node then traverse Left
            rootNode->left = deletenode(rootNode->left, data);

        else if (data > rootNode->data) // ? If data bigger than the Root Node then Traverse Right
            rootNode->right = deletenode(rootNode->right, data);

        else // ? If data compares the root's data
        {
            if ((rootNode->left == NULL) || (rootNode->right == NULL)) // ? 1 Or Leaf Node
            {
                node *temoNode = rootNode->left ? rootNode->left : rootNode->right;
                if (temoNode == NULL) // ? Leaf Node
                {
                    temoNode = rootNode;
                    rootNode = NULL;
                }
                else // ? Child Is non empty
                    rootNode = temoNode;
                free(temoNode);
            }
            else // ? If both child's are present
            {
                node *tempNode = smallestnode(rootNode->right);
                // NOTE Copying Data so we can replace it
                rootNode->data = tempNode->data;
                rootNode->right = deletenode(rootNode->right, tempNode->data);
            }
        }
        // END NOTE For BST
        // NOTE Start for AVL
        rootNode = balanceTree(rootNode);
        // END NOTE For AVL
        createNotification("[+] Node Deleted", 80, 140, window.getSize().y - 50);
        return rootNode;
    }

    node *smallestnode(node *index)
    {
        while (index->left != NULL)
            index = index->left;
        return index;
    }
    void showInOrder(node *traversenode = rootNode, int level = 1)
    {
        window.draw(statement(text, "AVL Tree", window.getSize().x - 100, window.getSize().y - 100));
        if (x >= window.getSize().x - 100)
            x = 100,
            window.clear();
        y = 0;
        if (traversenode != NULL)
        {
            showInOrder(traversenode->left, level + 1);
            for (int i = 0; i < level && traversenode != rootNode; i++)
                y += 50;
            printNodes(traversenode, x, y);
            x += 50;
            showInOrder(traversenode->right, level + 1);
        }
    }
    void printNodes(node *traversenode, int &x, int &y)
    {
        if (traversenode->left == NULL && traversenode->right == NULL)
        {
            circle = createCircle(circle, traversenode, x, y);
            circle.setFillColor(sf::Color(30, 144, 255));
            circle.setOutlineColor(sf::Color::Red);
        }
        else if (traversenode->left != NULL && traversenode->right != NULL)
        {
            sf::RectangleShape leftLine = createLine(line, traversenode->data), rightLine = createLine(line, traversenode->data);
            rightLine.setPosition((circle.getPosition().x + circle.getRadius() / 2) + 33, circle.getPosition().y + circle.getRadius());
            rightLine.setRotation(45);
            leftLine.setPosition((circle.getPosition().x + circle.getRadius() / 2) - 15, circle.getPosition().y + circle.getRadius());
            leftLine.setRotation(135);
            circle = createCircle(circle, traversenode, x, y);
            window.draw(leftLine);
            window.draw(rightLine);
        }
        else
            circle = createCircle(circle, traversenode, x, y);
        window.draw(circle);
        window.draw(createText(traversenode->data, x, y));
        window.draw(createLine(line, traversenode->data));
        data = traversenode->data;
    }
    inline void createNotification(const string &content, const int &length, const int &x, const int &y)
    {
        window.draw(createRectangle(rect, length, y - 100));
        window.draw(statement(text, content, x, y - 90));
    }
    inline sf::Text statement(sf::Text &text, const std::string &statement, const int &x, const int &y)
    {
        text.setFont(font);
        text.setFillColor(sf::Color::White);
        text.setCharacterSize(20);
        text.setString(statement);
        text.setPosition(x, y);
        return text;
    }
    inline sf::RectangleShape createRectangle(sf::RectangleShape &rect, const int &x, const int &y)
    {
        rect.setSize(sf::Vector2f(250, 40));
        rect.setFillColor(sf::Color(255, 165, 0));
        rect.setPosition(x, y);
        rect.setOutlineColor(sf::Color::Red);
        rect.setOutlineThickness(5);
        return rect;
    }
    inline sf::RectangleShape createLine(sf::RectangleShape &line, const int &currentData)
    {
        line.setSize(sf::Vector2f(50, 2));
        line.setFillColor(sf::Color::Cyan);
        if (currentData > data)
        {
            line.setPosition((circle.getPosition().x + circle.getRadius() / 2) + 33, circle.getPosition().y + circle.getRadius());
            line.setRotation(45);
        }
        else if (currentData <= data)
        {
            line.setPosition((circle.getPosition().x + circle.getRadius() / 2) - 15, circle.getPosition().y + circle.getRadius());
            line.setRotation(135);
        }
        return line;
    }
    inline sf::CircleShape createCircle(sf::CircleShape &circle, node *traversenode, const int &x, const int &y)
    {
        if (traversenode == preSuccessor && preSuccessor != NULL)
            circle.setFillColor(sf::Color::Magenta);
        else if (traversenode == successor && successor != NULL)
            circle.setFillColor(sf::Color::Yellow);
        else
            circle.setFillColor(sf::Color::Blue);
        circle.setOutlineColor(sf::Color::Cyan);
        circle.setOutlineThickness(2);
        circle.setRadius(20);
        circle.setPosition(sf::Vector2f(x, y));
        return circle;
    }
    inline sf::Text createText(const int &data, const int &x, const int &y)
    {
        text.setFont(font);
        text.setFillColor(sf::Color::White);
        text.setCharacterSize(20);
        text.setString(std::to_string(data));
        text.setPosition(x + 13, y + 7);
        return text;
    }

public:
    AVL()
    {
        if (!font.loadFromFile("impact.ttf"))
            std::cout << "Font Not Found!\n";
    }
    void mainMenu()
    {
        int option, number;
    Loop:
        system("clear");
        showInOrder();
        window.display();
        cout << "0. Insert node\n1. Find PreSuccessor & Successor\n2. Delete Node\n3. Exit\n";
        cout << "Option > ";
        cin >> option;
        switch (option)
        {
        case 0:
            window.clear();
            cout << "Enter Data: ";
            cin >> option;
            rootNode = insertnode(rootNode, option);
            break;
        case 1:
        {
            window.clear();
            createNotification("Presuccessor = Magnetta", 70, 80, window.getSize().y - 50);
            createNotification("Successor = Yellow", 70, 120, window.getSize().y + 20);
            cout << "Enter Number: ";
            cin >> number;
            findPreSuc(rootNode, number);
            break;
        }
        case 2:
            window.clear();
            cout << "Enter Number: ";
            cin >> number;
            deletenode(rootNode, number);
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "The Option is out of bounds, Please try again\n";
            break;
        }
        goto Loop;
    }
};
int main()
{
    AVL obj;
    obj.mainMenu();
}