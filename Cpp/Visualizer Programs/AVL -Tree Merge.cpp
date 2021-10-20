#include <iostream>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#include <queue>

sf::RenderWindow window(sf::VideoMode(1377, 768), "AVL & heap");

using namespace std;
struct node
{
    int data, height;
    node *left = NULL;
    node *right = NULL;
};
node *rootNode = NULL;
node *createnode(const int &data)
{
    node *tempnode;
    tempnode = new node;
    tempnode->data = data;
    return tempnode;
}
class Heap
{
    int *arr, capacity, heapSize, data = 0, x = 50, y = 10;

protected:
    sf::Font font;
    sf::Text text;
    sf::RectangleShape line, rect;
    sf::CircleShape circle;

public:
    Heap(){};
    Heap(const int &capacity) : heapSize(0), capacity(capacity)
    {
        arr = new int[capacity];
        if (!font.loadFromFile("impact.ttf"))
            std::cout << "Font Not Found!\n";
    }
    int insertNode(const int &data)
    {
        if (heapSize == capacity) // ? Checks if the array is now full
            return -1;
        heapSize++;
        int index = heapSize - 1;
        arr[index] = data;
        heapify(index);
        return 0;
    }
    void showInOrder(const int &index, int level = 1)
    {
        window.draw(statement(text, "Heap", window.getSize().x - 100, window.getSize().y - 100));
        if (x >= window.getSize().x - 100)
            x = 50, window.clear();
        y = 10;
        if (arr[index] != '\0')
        {
            showInOrder(left(index), level + 1);
            for (int i = 0; i < level && arr[index] != '\0'; i++)
                y += 50;
            printNodes(index, x, y);
            x += 50;
            showInOrder(right(index), level + 1);
        }
    }
    void printNodes(const int &index, const int &x, const int &y)
    {
        if (arr[left(index)] == '\0' && arr[right(index)] == '\0')
        {
            circle = createCircle(circle, x, y);
            circle.setFillColor(sf::Color(30, 144, 255));
            circle.setOutlineColor(sf::Color::Red);
            window.draw(circle);
        }
        else if (left(index) != '\0' && right(index) != '\0')
        {
            sf::RectangleShape leftLine, rightLine;
            leftLine = createLine(line, arr[index]), rightLine = createLine(line, arr[index]);
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
        window.draw(createText(arr[index], x, y));
        window.draw(createLine(line, arr[index]));
        data = arr[index];
    }
    int returnValue(const int &index) const
    {
        return arr[index];
    }
    int returnInOrder(const int &index)
    {
        if (arr[index] != '\0')
        {
            returnInOrder(left(index));
            return arr[index];
            returnInOrder(right(index));
        }
        return -1;
    }

    inline void createNotification(const string &content, const int &length, const int &x, const int &y)
    {
        window.draw(createRectangle(rect, length, y - 100));
        window.draw(statement(text, content, x, y - 90));
    }

protected:
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

private:
    // NOTE Circular Array Type Implementation
    inline int parent(const int &index) { return (index - 1) / 2; }
    inline int left(const int &index)
    {
        if (arr[index] != '\0' && ((2 * index) + 1) < heapSize)
            return (2 * index + 1);
        return -1;
    }
    inline int right(const int &index)
    {
        if (arr[index] != '\0' && ((2 * index) + 2) < heapSize)
            return (2 * index + 2);
        return -1;
    }
    void heapify(int &index) // ? Simple function to iteratively check and sort the array
    {
        while (arr[parent(index)] < arr[index] && arr[index] != '\0' && arr[parent(index)] != '\0' && index > -1 && index < heapSize)
            swap(arr[index], arr[parent(index)]), index = parent(index);
    }
};
class AVL : protected Heap
{
    int x = 50, y = 10, data = 0;
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
    // NOTE Double Rotations
    node *lrRotation(node *parentNode)
    {
        node *tempNode = parentNode->left;
        parentNode->left = rrRotation(tempNode);
        node *tempNode2 = llRotation(parentNode);
        createNotification("Left Right Rotation!", 50, 80, window.getSize().y);
        return tempNode2;
    }
    node *rlRotation(node *parentNode)
    {
        node *tempNode = parentNode->right;
        parentNode->right = llRotation(tempNode);
        return (rrRotation(parentNode));
        node *tempNode2 = rrRotation(parentNode);
        createNotification("Right Left Rotation!", 50, 80, window.getSize().y);
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
    void printNodes(node *traversenode, int &x, int &y)
    {
        if (traversenode->left == NULL && traversenode->right == NULL)
        {
            circle = createCircle(circle, x, y);
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
            circle = createCircle(circle, x, y);
            window.draw(leftLine);
            window.draw(rightLine);
        }
        else
            circle = createCircle(circle, x, y);
        window.draw(circle);
        window.draw(createText(traversenode->data, x, y));
        window.draw(createLine(line, traversenode->data));
        data = traversenode->data;
    }

public:
    AVL()
    {
        if (!font.loadFromFile("impact.ttf"))
            std::cout << "Font Not Found!\n";
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
        return traversenode;
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
};
static void mainMenu()
{
    AVL avlObj;
    int option, number, capacity = 0, heapSize = 0;
    char delayKey;
Loop:
    system("clear");
    avlObj.showInOrder();
    window.display();
    cout << "0. Insert node\n1. Reverse Specific Path\n2. Exit\n";
    cout << "Option > ";
    cin >> option;
    switch (option)
    {
    case 0:
    {
        window.clear();
        cout << "Enter Heap Size: ";
        cin >> capacity;
        Heap heapObj(capacity);
        while (number != -1 && heapSize != capacity)
        {
            window.clear();
            cout << "Enter Data[Press -1 To Exit]: ";
            cin >> number;
            if (number != -1)
                heapObj.insertNode(number);
            heapSize++;
            heapObj.showInOrder(0);
            window.display();
        }
        system("clear");
        number = 0;
        cout << "Enter For AVL Tree: \n";
        while (number != -1)
        {
            window.clear();
            cout << "Enter Data[Press -1 To Exit]: ";
            cin >> number;
            if (number != -1)
                rootNode = avlObj.insertnode(rootNode, number);
            avlObj.showInOrder(rootNode);
            window.display();
        }
        cout << "Press Any Key To Merge..";
        heapObj.createNotification("Press Any Key To Merge!", 50, 80, window.getSize().y);
        window.display();
        cin >> delayKey;
        window.clear();
        for (int i = 0; i < heapSize; i++)
        {
            window.clear();
            rootNode = avlObj.insertnode(rootNode, heapObj.returnInOrder(i));
            avlObj.showInOrder(rootNode);
            window.display();
        }
        number = 0;
    }
    break;
    case 2:
        exit(0);
        break;
    default:
        cout << "The Option is out of bounds, Please try again\n";
        break;
    }
    goto Loop;
}
int main()
{
    mainMenu();
}