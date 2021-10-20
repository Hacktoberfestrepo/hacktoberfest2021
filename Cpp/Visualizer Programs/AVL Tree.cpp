#include <iostream>
#include <stdlib.h>
#include <SFML/Graphics.hpp>

sf::RenderWindow window(sf::VideoMode(1377, 768), "AVL");

using namespace std;
struct node
{
    int data;
    node *left = NULL;
    node *right = NULL;
};
node *rootNode = NULL;
node *createNode(const int &data)
{
    node *tempNode;
    tempNode = new node;
    tempNode->data = data;
    return tempNode;
}
class AVL
{
    int x = 50, y = 10, data = 0;
    sf::Font font;
    sf::Text text;
    sf::RectangleShape line, rect;
    sf::CircleShape circle;

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
    void createNotification(const string &content)
    {
        window.draw(createRectangle(rect, 50, window.getSize().y - 100));
        window.draw(statement(text, content, 80, window.getSize().y - 90));
    }
    // NOTE Single Rotations
    inline node *rrRotation(node *parentNode)
    {
        node *tempNode = parentNode->right;
        parentNode->right = tempNode->left; // ? Assuming that maybe there's a left node in the parent's right
        tempNode->left = parentNode;
        createNotification("Right Right Rotation!");
        return tempNode;
    }
    inline node *llRotation(node *parentNode)
    {
        node *tempNode = parentNode->left;
        parentNode->left = tempNode->right; // ? Assuming that maybe there's a right node in the parent's left
        tempNode->right = parentNode;
        createNotification("Left Left Rotation!");
        return tempNode;
    }
    // NOTE Double Rotations
    node *lrRotation(node *parentNode)
    {
        node *tempNode = parentNode->left;
        parentNode->left = rrRotation(tempNode);
        node* tempNode2 =llRotation(parentNode);
        createNotification("Left Right Rotation!");
        return tempNode2;
    }
    node *rlRotation(node *parentNode)
    {
        node *tempNode = parentNode->right;
        parentNode->right = llRotation(tempNode);
        return (rrRotation(parentNode));
        node* tempNode2 =rrRotation(parentNode);
        createNotification("Right Left Rotation!");
        return tempNode2;
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
    node *insertNode(node *traverseNode, const int &data)
    {
        if (traverseNode == NULL) // ? For Null Node
            return (createNode(data));
        else if (data < traverseNode->data) // ? For Left Node
        {
            traverseNode->left = insertNode(traverseNode->left, data);
            traverseNode = balanceTree(traverseNode);
        }
        else if (data > traverseNode->data) // ? For Right Node
        {
            traverseNode->right = insertNode(traverseNode->right, data);
            traverseNode = balanceTree(traverseNode);
        }
        return traverseNode;
    }

    void showInOrder(node *traverseNode = rootNode, int level = 1)
    {
        window.draw(statement(text, "AVL Tree", window.getSize().x - 100, window.getSize().y - 100));
        if (x >= window.getSize().x - 100)
            x = 100,
            window.clear();
        y = 0;
        if (traverseNode != NULL)
        {
            showInOrder(traverseNode->left, level + 1);
            for (int i = 0; i < level && traverseNode != rootNode; i++)
                y += 50;
            printNodes(traverseNode, x, y);
            x += 50;
            showInOrder(traverseNode->right, level + 1);
        }
    }
    void printNodes(node *traverseNode, int &x, int &y)
    {
        if (traverseNode->left == NULL && traverseNode->right == NULL)
        {
            circle = createCircle(circle, x, y);
            circle.setFillColor(sf::Color(30, 144, 255));
            circle.setOutlineColor(sf::Color::Red);
            window.draw(circle);
        }
        else if (traverseNode->left != NULL && traverseNode->right != NULL)
        {
            sf::RectangleShape leftLine = createLine(line, traverseNode->data), rightLine = createLine(line, traverseNode->data);
            rightLine.setPosition((circle.getPosition().x + circle.getRadius() / 2) + 33, circle.getPosition().y + circle.getRadius());
            rightLine.setRotation(45);
            leftLine.setPosition((circle.getPosition().x + circle.getRadius() / 2) - 15, circle.getPosition().y + circle.getRadius());
            leftLine.setRotation(135);
            window.draw(createCircle(circle, x, y));
            window.draw(leftLine);
            window.draw(rightLine);
        }
        else
            window.draw(createCircle(circle, x, y));
        window.draw(createText(traverseNode->data, x, y));
        window.draw(createLine(line, traverseNode->data));
        data = traverseNode->data;
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
    inline sf::CircleShape createCircle(sf::CircleShape &circle, const int &x, const int &y)
    {
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
        int option;
        node *traverseNode;
    Loop:
        showInOrder();
        window.display();
        cout << "0. Insert Node\n1. Exit\n";
        cout << "Option > ";
        cin >> option;
        switch (option)
        {
        case 0:
            window.clear();
            cout << "Enter Data: ";
            cin >> option;
            rootNode = insertNode(rootNode, option);
            system("clear");
            break;
        case 1:
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