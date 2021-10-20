#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

sf::RenderWindow window(sf::VideoMode(1377, 768), "Binary Search Tree In SFML");
struct node
{
    int data;
    node *left = NULL;
    node *right = NULL;
};
node *rootNode = NULL;
class BST
{
    int x = 50, y = 10, data = 0, fibonnaciNumberTemp = 0, searchData = -1;
    sf::Font font;
    std::vector<int> fibonnaciArr;
    sf::Text text;
    sf::RectangleShape line, rect;
    sf::CircleShape circle;
    node *createNode(const int &data)
    {
        node *tempNode;
        tempNode = new node;
        tempNode->data = data;
        return tempNode;
    }

    node *inputNode(node *traverseNode, const int &data)
    {
        if (traverseNode == NULL)
        {
            traverseNode = createNode(data);
            evaluateFibonnacinumbers(traverseNode, fibonnaciNumberTemp);
            fibonnaciNumberTemp = traverseNode->data;
            return traverseNode;
        }
        else if (data <= traverseNode->data)
            traverseNode->left = inputNode(traverseNode->left, data);
        else if (data > traverseNode->data)
            traverseNode->right = inputNode(traverseNode->right, data);
        return traverseNode;
    }
    node *smallestNode(node *index)
    {
        while (index->left != NULL)
            index = index->left;
        return index;
    }
    node *deleteNode(node *traverseNode, const int &data)
    {
        if (traverseNode == NULL)
        {
            std::cout << "[-] Node not found!\n";
            return traverseNode;
        }
        else if (data < traverseNode->data)
            traverseNode->left = deleteNode(traverseNode->left, data);
        else if (data > traverseNode->data)
            traverseNode->right = deleteNode(traverseNode->right, data);
        else if (data == traverseNode->data)
        {
            if (traverseNode->left == NULL && traverseNode->right == NULL) // ? Already is a Leaf Node
                free(traverseNode);
            else if (traverseNode->left == NULL) // ? Right Child is present
            {
                node *temp = traverseNode;
                traverseNode = traverseNode->right;
                free(temp);
            }
            else if (traverseNode->right == NULL) // ? Left child is present
            {
                node *temp = traverseNode;
                traverseNode = traverseNode->left;
                free(temp);
            }
            else // ? Both left and Right childs are present
            {
                node *temp = smallestNode(traverseNode->right);
                traverseNode->data = temp->data;                                   // ? Not deleting the node just replacing its data, as its the parent node with unpredicted childs
                traverseNode->right = deleteNode(traverseNode->right, temp->data); // ? Now sending the original data for deletion
            }
            createNotification("[+] Node Deleted", 80, 140, window.getSize().y - 50);
        }

        return traverseNode;
    }
    bool isArmStrong(const int &num)
    {
        int originalNumber = num, remainder, result = 0;
        while (originalNumber != 0)
        {
            remainder = originalNumber % 10;
            result += remainder * remainder * remainder;
            originalNumber = originalNumber / 10;
        }
        if (result == num)
            return true;
        return false;
    }
    bool isPalindrome(const int &num)
    {
        int originalNumber = num, remainder, result = 0;
        while (originalNumber != 0)
        {
            remainder = originalNumber % 10;
            result = (result * 10) + remainder;
            originalNumber = originalNumber / 10;
        }
        if (result == num)
            return true;
        return false;
    }

    bool isAFibonacciNumber(const int &number)
    {
        for (const int &fibonnaciNumber : fibonnaciArr)
            if (number == fibonnaciNumber)
                return true;
        return false;
    }
    inline void createNotification(const std::string &content, const int &length, const int &x, const int &y)
    {
        window.draw(createRectangle(rect, length, y - 100));
        window.draw(statement(text, content, x, y - 90));
    }
    inline void evaluateFibonnacinumbers(node *traverseNode, int &PreviousToPrevious) { fibonnaciArr.push_back((PreviousToPrevious + traverseNode->data)); }
    inline sf::RectangleShape createLine(sf::RectangleShape &line, const int &currentData)
    {
        line.setSize(sf::Vector2f(50, 2));
        line.setFillColor(sf::Color::Cyan);
        if (data > currentData)
        {
            line.setPosition((circle.getPosition().x + circle.getRadius() / 2) + 33, circle.getPosition().y + circle.getRadius());
            line.setRotation(45);
        }
        else if (data <= currentData)
        {
            line.setPosition((circle.getPosition().x + circle.getRadius() / 2) - 15, circle.getPosition().y + circle.getRadius());
            line.setRotation(135);
        }
        return line;
    }
    inline sf::CircleShape createCircle(sf::CircleShape &circle, node *traverseNode)
    {
        if (searchData == traverseNode->data)
        {
            circle.setFillColor(sf::Color::Magenta);
            createNotification("[+] Node Found!", 80, 140, window.getSize().y - 50);
        }
        else if (isAFibonacciNumber(traverseNode->data) == true)
            circle.setFillColor(sf::Color::Green);
        else if (isArmStrong(traverseNode->data) == true)
            circle.setFillColor(sf::Color::Red);
        else if (isPalindrome(traverseNode->data) == true)
            circle.setFillColor(sf::Color::Blue);
        else if (traverseNode->left == NULL && traverseNode->right == NULL)
            circle.setFillColor(sf::Color(30, 144, 255));
        else
            circle.setFillColor(sf::Color::Yellow);
        circle.setOutlineColor(sf::Color::Cyan);
        circle.setOutlineThickness(2);
        circle.setRadius(20);
        circle.setPosition(sf::Vector2f(x, y));
        return circle;
    }
    inline sf::Text createText(sf::Text &text, node *traverseNode)
    {
        text.setFont(font);
        text.setFillColor(sf::Color::White);
        text.setCharacterSize(20);
        text.setString(std::to_string(traverseNode->data));
        text.setPosition(x + 13, y + 7);
        return text;
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
    void inorderDisplay(int level = 1, node *traverseNode = rootNode)
    {
        window.draw(statement(text, "BST Tree", window.getSize().x - 100, window.getSize().y - 100));
        if (x >= window.getSize().x)
        {
            x = 100;
            window.clear();
        }
        y = 0;
        if (traverseNode != NULL)
        {
            inorderDisplay(level + 1, traverseNode->left);
            for (int i = 0; i < level && traverseNode != rootNode; i++)
                y += 50;
            printNodes(traverseNode, x, y);
            x += 50;
            inorderDisplay(level + 1, traverseNode->right);
        }
    }
    void printNodes(node *traversenode, int &x, int &y)
    {
        if (traversenode->left == NULL && traversenode->right == NULL)
        {
            circle = createCircle(circle, traversenode);
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
            circle = createCircle(circle, traversenode);
            window.draw(leftLine);
            window.draw(rightLine);
        }
        else
            circle = createCircle(circle, traversenode);
        window.draw(circle);
        window.draw(createText(text, traversenode));
        window.draw(createLine(line, traversenode->data));
        data = traversenode->data;
    }

    // NOTE This function is hard coded just to provide a demo to show different indicators of the program
    inline void demo()
    {
        node *tempNode = createNode(10);
        std::cout << "Before we start lets just go through some indicators\n";
        std::string string = "Normal Number";
        y = window.getSize().y / 2 - 50, x += 100;
        circle = createCircle(circle, tempNode);
        circle.setFillColor(sf::Color::Yellow);
        window.draw(circle);
        window.draw(createText(text, tempNode));
        window.draw(statement(text, string, x - 50, y + 70));
        x += 150;
        string = "Leaf Node";
        window.draw(createCircle(circle, tempNode));
        window.draw(createText(text, tempNode));
        window.draw(statement(text, string, x - 25, y + 70));
        x += 150;
        string = "Search Node";
        searchData = 10;
        window.draw(createCircle(circle, tempNode));
        window.draw(createText(text, tempNode));
        window.draw(statement(text, string, x - 25, y + 70));
        x += 180;
        string = "Fibonnaci Number";
        tempNode->data = 13;
        circle = createCircle(circle, tempNode);
        circle.setFillColor(sf::Color::Green);
        window.draw(circle);
        window.draw(createText(text, tempNode));
        window.draw(statement(text, string, x - 50, y + 70));
        x += 200;
        string = "ArmStrong Number";
        tempNode->data = 153;
        window.draw(createCircle(circle, tempNode));
        window.draw(createText(text, tempNode));
        window.draw(statement(text, string, x - 50, y + 70));
        x += 200;
        string = "Palindrome Number";
        tempNode->data = 55;
        window.draw(createCircle(circle, tempNode));
        window.draw(createText(text, tempNode));
        window.draw(statement(text, string, x - 50, y + 70));
        window.display();
        std::cout << "Press Any Key To End Demo..";
        std::cin.get();
        // ? Resetting Everything back to normal
        free(tempNode);
        window.clear();
        x = 50, y = 10, searchData = -1;
        system("clear");
    }

public:
    BST()
    {
        if (!font.loadFromFile("impact.ttf"))
            std::cout << "Font Not Found!\n";
    }
    void mainMenu()
    {
        int option, data;
        node *traverseNode;
        demo();
    Loop:
        system("clear");
        inorderDisplay();
        window.display();
        std::cout << "0. Insert Node\n1. Delete Node\n2. Search Node\n3. Exit\n";
        std::cout << "Option > ";
        std::cin >> option;
        switch (option)
        {
        case 0:
            window.clear();
            std::cout << "Enter Data: ";
            std::cin >> data;
            rootNode = inputNode(rootNode, data);
            break;
        case 1:
            window.clear();
            std::cout << "Enter Number: ";
            std::cin >> data;
            traverseNode = rootNode;
            deleteNode(traverseNode, data);
            break;
        case 2:
            window.clear();
            std::cout << "Enter Number: ";
            std::cin >> searchData;
            break;
        case 3:
            exit(0);
            break;
        default:
            std::cout << "[-] The Option is out of bounds, Please try again\n";
            break;
        }
        goto Loop;
    }
};

int main()
{
    BST obj;
    obj.mainMenu();
}
