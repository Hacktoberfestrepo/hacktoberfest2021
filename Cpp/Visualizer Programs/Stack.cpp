#include "Stack.h"

inline void Stack::makeNull()
{
    for (int i = 0; i < size; i++)
        pop();
}
bool Stack::isAFibonacciNumber(const int &number)
{
    node *traverseNode = fibonnaciArr;
    while (traverseNode != NULL)
    {
        if (traverseNode->data == number)
            return true;
        traverseNode = traverseNode->nextNode;
    }
    return false;
}
void Stack::evaluateFibonnacinumbers(node *traverseNode)
{
    node *tempNode1 = createNode(tempVal1 + tempVal2);
    traverseNode = tempNode1;
    cout << traverseNode->data <<  '\n';
    traverseNode = traverseNode->nextNode;
}
void Stack::reverseQueue(int tempArr[], int &tempVal, int &currentIndex, const int &size)
{
    if (size > currentIndex)
    {
        tempVal = tempArr[currentIndex];
        push(tempVal);
        currentIndex++;
        reverseQueue(tempArr, tempVal, currentIndex, size);
    }
    cout << "Reverse Successful!\n";
    return;
}
Stack::Stack(const int &size) : size(size)
{
    if (!font.loadFromFile("impact.ttf"))
        cout << "ERROR FONT LOADING" << endl;
}
void Stack::createRectangle(sf::RectangleShape &temp_rect)
{
    temp_rect.setSize(sf::Vector2f(50, 40));
    temp_rect.setFillColor(sf::Color::Red);
    temp_rect.setPosition(x, y);
    temp_rect.setOutlineColor(sf::Color::Blue);
    temp_rect.setOutlineThickness(5);
    rectarray.push_back(temp_rect);
}

// void Stack::createLine(sf::RectangleShape &temp_line)
// {
//     temp_line.setSize(sf::Vector2f(5, 40));
//     temp_line.setFillColor(sf::Color::Yellow);
//     temp_line.setPosition(x+20, y);
//     temp_line.setOutlineColor(sf::Color::Blue);
//     temp_line.setOutlineThickness(5);
//     linearray.push_back(temp_line);
// }
void Stack::createText(sf::Text &temp_text, const int &n)
{
    if (isAFibonacciNumber(n) == true)
        temp_text.setFillColor(sf::Color::Green);
    else
        temp_text.setFillColor(sf::Color::White);
    temp_text.setPosition(x + 13, y);
    temp_text.setFont(font);
    textarray.push_back(temp_text);
}

void Stack::createBox(const int &n)
{
    sf::Text temp_text;
    sf::RectangleShape temp_rect;
    sf::RectangleShape temp_line;
    temp_text.setString(to_string(n));
    createRectangle(temp_rect);
    // createLine(temp_line);
    createText(temp_text, n);
    y = y - 40;
}
inline void Stack ::inputArr()
{
    int number;
    cout << "Enter Array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> number;
        push(number);
    }
}
inline void Stack ::pop()
{
    if (isEmpty() == true)
    {
        std::cout << "Stack is Empty\n";
        return;
    }
    node *temp = headNode;
    headNode = headNode->nextNode;
    int popped = temp->data;
    free(temp);
    rectarray.pop_back();
    textarray.pop_back();
    cout << "Popped " << popped << " Successfully\n";
}
inline void Stack ::push(const int &number)
{
    node *tempNode = createNode(number);
    tempNode->nextNode = headNode;
    headNode = tempNode;
    if (size % 2 == 0)
        tempVal1 = number;
    else if (size % 3 == 0)
        tempVal2 = number;
    // cout << "1\n";
    if (iterate < 3)
    {
        // cout << "2\n";
        fibonnaciArr = tempNode;
        fibonnaciArr = fibonnaciArr->nextNode;
        iterate++;
    }
    else
        evaluateFibonnacinumbers(fibonnaciArr);
    // cout << "3\n";
    createBox(number);
    cout << "Pushed " << number << " Successfully in Array\n";
}
bool Stack ::isEmpty() const
{
    if (headNode == NULL)
        return true;
    else
        return false;
}

// bool Stack ::isFull() const
// {
//     if (top == (size - 1))
//         return true;
//     elsejj
//         return false;
// }
inline void Stack ::display()
{
    window.clear();
    int i; //for loop
    iterate = 0;
    cout << "Stored Array: ";
    node *tempNode = headNode;
    while (tempNode != NULL)
    {
        cout << tempNode->data << " ";
        tempNode = tempNode->nextNode;
    }
    cout << '\n';
    i = (size-1);
    for (rect_iterator = rectarray.begin(); rect_iterator != rectarray.end(); rect_iterator++)
    {
        window.draw(rectarray[i]);
        i--;
    }
    // i = (top);
    // for (line_iterator = linearray.begin(); line_iterator != linearray.end(); line_iterator++)
    // {
    //     window.draw(line_iterator[i]);
    //     i--;
    // }

    i = (size-1);
    for (text_iterator = textarray.begin(); text_iterator != textarray.end(); text_iterator++)
    {

        window.draw(textarray[i]);
        i--;
    }
    cout << endl;
    window.display();
}
