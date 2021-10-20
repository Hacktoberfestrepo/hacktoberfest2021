#include <iostream>
#include <SFML/Graphics.hpp>

sf::RenderWindow window(sf::VideoMode(1377, 768), "Binary Search Tree & Linked List In SFML");
struct LNode
{
    int data;
    LNode *next;
};
struct TNode
{
    int data;
    TNode *left = NULL;
    TNode *right = NULL;
};
LNode *headNode = NULL;
class BST
{
    int x = 50, y = 0, data = 0, xLinkedList = window.getSize().x - 100, yLinkedList = window.getSize().y - 100;
    sf::Font font;
    sf::Text text;
    sf::RectangleShape line, rect;
    sf::CircleShape circle;
    TNode *createNode(const int &data)
    {
        TNode *node = new TNode();
        node->data = data;
        node->left = NULL;
        node->right = NULL;
        return node;
    }
    inline void swap(LNode *p1, LNode *p2) { p1->data = p1->data + p2->data, p2->data = p1->data - p2->data, p1->data = p1->data - p2->data; }

    void inputNode(const int &n)
    {
        countNode++;
        LNode *tempNode, *traverseNode;
        tempNode = new LNode;
        tempNode->data = n;
        tempNode->next = NULL;
        if (headNode == NULL)
        {
            headNode = tempNode;
        }
        else
        {
            traverseNode = new LNode;
            traverseNode = headNode;
            while (traverseNode->next != NULL)
            {
                traverseNode = traverseNode->next;
            }
            traverseNode->next = tempNode;
        }
        std::cout << "[+] Node has been successfully Added!\n";
    }
    TNode *sortedListToBST(LNode *headNode) { return sortedListToBSTRecur(&headNode, countNode); }

    TNode *sortedListToBSTRecur(LNode **headNode, const int &n)
    {
        if (n <= 0)
            return NULL;
        TNode *left = sortedListToBSTRecur(headNode, n / 2), *root = createNode((*headNode)->data);
        root->left = left;
        *headNode = (*headNode)->next;
        root->right = sortedListToBSTRecur(headNode, n - n / 2 - 1);
        return root;
    }
    void sortLinkedList(LNode *headNode)
    {
        LNode *traverseNode = new LNode, *lastNode;
        int swappedCondition;
        if (traverseNode == NULL)
            return;
        else
        {
            do
            {
                traverseNode = headNode;
                swappedCondition = 0;
                while (traverseNode->next != lastNode)
                {
                    if (traverseNode->data > traverseNode->next->data)
                        swap(traverseNode, traverseNode->next), swappedCondition = 1;
                    traverseNode = traverseNode->next;
                }
                lastNode = traverseNode;
            } while (swappedCondition);
        }
        std::cout << "Linked List Sorted Successfully\n";
    }
    inline sf::RectangleShape createLine(sf::RectangleShape &line, TNode *traverseNode)
    {
        line.setSize(sf::Vector2f(50, 2));
        line.setFillColor(sf::Color::Cyan);
        if (data > traverseNode->data)
        {
            line.setPosition((circle.getPosition().x + circle.getRadius() / 2) + 33, circle.getPosition().y + circle.getRadius());
            line.setRotation(45);
        }
        else if (data <= traverseNode->data)
        {
            line.setPosition((circle.getPosition().x + circle.getRadius() / 2) - 15, circle.getPosition().y + circle.getRadius());
            line.setRotation(135);
        }
        return line;
    }
    inline sf::CircleShape createCircle(sf::CircleShape &circle)
    {
        circle.setFillColor(sf::Color::Blue);
        circle.setOutlineColor(sf::Color::Cyan);
        circle.setOutlineThickness(2);
        circle.setRadius(20);
        circle.setPosition(sf::Vector2f(x, y));
        return circle;
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
    template <typename T>
    inline sf::Text createText(T *traverseNode, const int &x, const int &y)
    {
        text.setFont(font);
        text.setFillColor(sf::Color::White);
        text.setCharacterSize(20);
        text.setString(std::to_string(traverseNode->data));
        text.setPosition(x + 13, y + 7);
        return text;
    }
    inline sf::RectangleShape createRectangle()
    {
        rect.setSize(sf::Vector2f(50, 40));
        rect.setFillColor(sf::Color(255, 165, 0));
        rect.setPosition(xLinkedList, yLinkedList);
        rect.setOutlineColor(sf::Color::Cyan);
        rect.setOutlineThickness(5);
        return rect;
    }
    inline void createBox(LNode *traverseNode)
    {
        window.draw(createRectangle());
        window.draw(createText(traverseNode, xLinkedList, yLinkedList));
        if (xLinkedList <= window.getSize().x / 2)
            xLinkedList = window.getSize().x - 50;
        if (yLinkedList >= 50)
            yLinkedList -= 50;
        else if (yLinkedList < 50)
            xLinkedList -= 100, yLinkedList = window.getSize().y - 100;
    }
    void showInOrder(TNode *traverseNode, TNode *rootNode, int level = 1)
    {
        window.draw(statement(text, "BST Tree & Linked List", 25, window.getSize().y - 100));
        if (x >= window.getSize().x / 2 + 100)
            x = 50, window.clear();
        y = 0;
        if (traverseNode != NULL)
        {
            showInOrder(traverseNode->left, rootNode, level + 1);
            for (int i = 0; i < level && traverseNode != rootNode; i++)
                y += 50;
            printNodes(traverseNode, x, y);
            x += 50;
            showInOrder(traverseNode->right, rootNode, level + 1);
        }
    }
    void printNodes(TNode *traversenode, int &x, int &y)
    {
        if (traversenode->left == NULL && traversenode->right == NULL)
        {
            circle = createCircle(circle);
            circle.setFillColor(sf::Color(30, 144, 255));
            circle.setOutlineColor(sf::Color::Red);
        }
        else if (traversenode->left != NULL && traversenode->right != NULL)
        {
            sf::RectangleShape leftLine = createLine(line, traversenode), rightLine = createLine(line, traversenode);
            rightLine.setPosition((circle.getPosition().x + circle.getRadius() / 2) + 33, circle.getPosition().y + circle.getRadius());
            rightLine.setRotation(45);
            leftLine.setPosition((circle.getPosition().x + circle.getRadius() / 2) - 15, circle.getPosition().y + circle.getRadius());
            leftLine.setRotation(135);
            circle = createCircle(circle);
            window.draw(leftLine);
            window.draw(rightLine);
        }
        else
            circle = createCircle(circle);
        window.draw(circle);
        window.draw(createText(traversenode, x, y));
        window.draw(createLine(line, traversenode));
        data = traversenode->data;
    }
    void showLinkedList(LNode *traverseNode)
    {
        yLinkedList = window.getSize().y - 50;
        while (traverseNode != NULL)
        {
            createBox(traverseNode);
            traverseNode = traverseNode->next;
        }
    }
    inline void displayBoth()
    {
        showLinkedList(headNode);
        TNode *rootNode = sortedListToBST(headNode);
        TNode *traverseNode = rootNode;
        showInOrder(traverseNode, rootNode);
        window.display();
    }

public:
    static int countNode;
    BST()
    {
        if (!font.loadFromFile("impact.ttf"))
            std::cout << "Font Not Found!\n";
    }
    void mainMenu()
    {
        int option, data;
    Loop:
        displayBoth();
        std::cout << "0. Insert Node\n1. Exit\n";
        std::cout << "Option > ";
        std::cin >> option;
        switch (option)
        {
        case 0:
            system("clear");
            std::cout << "Enter Data: ";
            std::cin >> data;
            inputNode(data);
            window.clear();
            break;
        case 1:
            exit(0);
            break;
        default:
            std::cout << "[-] The Option is out of bounds, Please try again\n";
            break;
        }
        goto Loop;
    }
};
int BST::countNode = 0;

int main()
{
    BST obj;
    obj.mainMenu();
}