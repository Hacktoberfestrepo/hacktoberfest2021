#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
int size_x = 800;
sf::RenderWindow window(sf::VideoMode(size_x, 600), "Fibonnaci Series Using Stack-Array");
struct node
{
    int data;
    node *nextNode;
};

node *headNode = NULL;
class Stack
{
    node *createNode(const int &data)
    {
        node *tempNode = new node;
        tempNode->nextNode = NULL;
        tempNode->data = data;
        return tempNode;
    };
    sf::Font font;
    vector<sf::Text> textarray;
    vector<sf::Text>::const_iterator text_iterator;
    vector<sf::RectangleShape> rectarray;
    vector<sf::RectangleShape>::const_iterator rect_iterator;
    // vector<sf::RectangleShape> linearray;
    // vector<sf::RectangleShape>::const_iterator line_iterator;

public:
    int x = window.getSize().x / 2, y = 550, size, tempVal1=0, tempVal2=0, result, iterate;
    node *fibonnaciArr = NULL;
    Stack(const int&);
    inline void inputArr();
    inline void pop();
    inline void makeNull();
    inline void push(const int &);
    void createRectangle(sf::RectangleShape &);
    void createText(sf::Text &, const int &);
    void reverseQueue(int[], int &, int &, const int &);
    // void createLine(sf::RectangleShape &);
    bool isEmpty() const;
    // bool isFull() const;
    void evaluateFibonnacinumbers(node*);
    bool isAFibonacciNumber(const int &);
    void createBox(const int &);
    inline void display();
};