#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
sf::RenderWindow window(sf::VideoMode(1377, 768), "Graph");

struct Edge
{
    char startVertex, endVertex;
};

class AdjacencyMatrix
{
    int x = 50, y = 10, prevXPos = 50, prevYPos = 10;
    bool **adjMatrix;
    size_t rows = 0, columns = 0;
    sf::Font font;
    sf::Text text;
    sf::RectangleShape rect;
    sf::Vertex vertex1, vertex2;
    sf::CircleShape circle, circle2;

public:
    AdjacencyMatrix(const size_t &rows, const size_t &columns) : rows(rows), columns(columns)
    {
        adjMatrix = new bool *[rows];
        for (int i = 1; i <= rows; i++)
        {
            adjMatrix[i] = new bool[rows];
            for (int j = 1; j <= columns; j++)
                adjMatrix[i][j] = false;
        }
        if (!font.loadFromFile("impact.ttf"))
            std::cout << "Font Not Found!\n";
    }
    inline void insertEdge(Edge &edge)
    {
        if (edge.startVertex - 97 > rows || edge.endVertex - 97 > columns || edge.startVertex - 97 <= 0 || edge.endVertex - 97 <= 0)
            return;
        adjMatrix[edge.startVertex - 97][edge.endVertex - 97] = adjMatrix[edge.endVertex - 97][edge.startVertex - 97] = true;
        cout << "[+] Node has been successfully inserted!\n";
    }
    inline void deleteEdge(Edge &edge)
    {
        if (edge.startVertex - 97 > rows || edge.endVertex - 97 > columns || edge.startVertex - 97 <= 0 || edge.endVertex - 97 <= 0)
            return;
        adjMatrix[edge.startVertex - 97][edge.endVertex - 97] = adjMatrix[edge.endVertex - 97][edge.startVertex - 97] = false;
        cout << "[+] Node has been successfully removed!\n";
    }
    void displayBoth()
    {
        displayMatrix();
        displayList();
    }
    ~AdjacencyMatrix()
    {
        for (int i = 1; i <= rows; i++)
            delete[] adjMatrix[i];
        delete[] adjMatrix;
    }

private:
    void displayMatrix()
    {
        window.draw(statement("Graph", 50, window.getSize().y - 100));
        char prevDataForJ = ' ', prevDataForI = ' ';
        cout << "Resultant Matrix: \n";
        bool **visited = new bool *[rows];
        for (int i = 1; i <= rows; i++)
        {
            visited[i] = new bool[rows];
            for (int j = 1; j <= columns; j++)
                visited[i][j] = false;
        }
        for (int i = 1; i <= rows; i++)
        {
            y = rand() % (window.getSize().y / 2) - 50;
            cout << char(i + 96) << ' ';
            x = rand() % (window.getSize().x / 2);
            printNodes(char(i + 96), prevDataForJ, x, y, prevXPos, prevYPos);
            // prevDataForI = char(i + 96);
            for (int j = 1; j <= columns; j++)
            {
                if (!visited[i][j] && adjMatrix[i][j])
                {
                    y = rand() % (window.getSize().y / 2 - 50);
                    cout << char(j + 96) << ' ';
                    x = rand() % (window.getSize().x / 2);
                    printNodes(char(j + 96), prevDataForJ, x, y, prevXPos, prevYPos);
                    prevDataForJ = char(j + 96);
                    prevXPos = x, prevYPos = y;
                    visited[i][j] = visited[j][i] = true;
                }
            }
            cout << '\n';
        }
        cout << '\n';
    }
    void displayList()
    {
        window.draw(statement("List", (window.getSize().x - 50), window.getSize().y - 100));
        window.draw(statement("Head Nodes", (window.getSize().x / 2), 10));
        window.draw(statement("Dervied Nodes ->", (window.getSize().x / 2 + 200), window.getSize().y - 200));
        x = window.getSize().x / 2 + 50, y = 0;
        sf::Color fillColor, outLineColor;
        cout << "Resultant List: \n";
        for (int i = 1; i <= rows; i++)
        {
            y += 50;
            x = window.getSize().x / 2 + 50;
            fillColor = sf::Color::Red;
            outLineColor = (sf::Color(255, 165, 0));
            createBox(fillColor, outLineColor, char(i + 96), x, y);
            cout << char(i + 96) << " : ";
            for (int j = 1; j <= columns; j++)
                if (adjMatrix[i][j] == 1)
                {
                    fillColor = sf::Color(253, 184, 39);
                    outLineColor = (sf::Color(255, 165, 0));
                    createBox(fillColor, outLineColor, char(j + 96), x, y);
                    cout << char(j + 96) << ' ';
                }
            cout << '\n';
        }
        cout << '\n';
    }
    inline void createBox(sf::Color &fillColor, sf::Color &outLineColor, const char &data, int &x, int &y)
    {
        window.draw(createRectangle(fillColor, outLineColor, x, y));
        window.draw(createText(data, x, y));
        if (x <= window.getSize().x)
            x += 50;
        else if (x >= window.getSize().x)
            y += 50, x = (window.getSize().x / 2) + 100;
    }
    void printNodes(const char &data, const char &prevData, const int &x, const int &y, const int &prevXPos, const int &prevYPos)
    {

        circle = createCircle(prevXPos, prevYPos);
        circle2 = createCircle(x, y);
        window.draw(createLine(x, y + 10, prevXPos + 44, prevYPos + 10));
        window.draw(circle);
        window.draw(circle2);
        window.draw(createText(prevData, prevXPos, prevYPos));
        window.draw(createText(data, x, y));
    }
    inline sf::Text statement(const std::string &statement, const int &x, const int &y)
    {
        text.setFont(font);
        text.setFillColor(sf::Color::White);
        text.setCharacterSize(20);
        text.setString(statement);
        text.setPosition(x, y);
        return text;
    }
    inline sf::RectangleShape createRectangle(sf::Color &fillColor, sf::Color &outLineColor, const int &x, const int &y)
    {
        rect.setSize(sf::Vector2f(50, 40));
        rect.setFillColor(fillColor);
        rect.setPosition(x, y);
        rect.setOutlineColor(outLineColor);
        rect.setOutlineThickness(5);
        return rect;
    }
    inline sf::CircleShape createCircle(const int &x, const int &y)
    {
        circle.setFillColor(sf::Color::Blue);
        circle.setOutlineColor(sf::Color::Cyan);
        circle.setOutlineThickness(2);
        circle.setRadius(20);
        circle.setPosition(sf::Vector2f(x, y));
        return circle;
    }
    inline sf::VertexArray createLine(const int &x, const int &y, const int &prevXPos, const int &prevYPos)
    {
        vertex1.position = sf::Vector2f(prevXPos, prevYPos);
        vertex2.position = sf::Vector2f(x, y);
        vertex1.color = sf::Color::Red;
        vertex2.color = sf::Color::Green;
        sf::VertexArray line(sf::Lines, 2);
        line[0] = vertex1, line[1] = vertex2;
        return line;
    }
    inline sf::Text createText(const char &data, const int &x, const int &y)
    {
        text.setFont(font);
        text.setFillColor(sf::Color::White);
        text.setCharacterSize(20);
        text.setString(data);
        text.setPosition(x + 13, y + 7);
        return text;
    }
};

int main()
{
    int rows, columns, opt;
    Edge edge;
    cout << "Enter Rows & Columns: ";
    cin >> rows >> columns;
    AdjacencyMatrix obj(rows, columns);
Loop:
    window.display();
    cout << "0. Input Edge\n1. Remove Edge\n2. Display Both List & Matrix\n3. Exit\n";
    cout << "Option > ";
    cin >> opt;
    switch (opt)
    {
    case 0:
        window.clear();
        system("clear");
        cout << "Enter Start & End Vertex: ";
        cin >> edge.startVertex >> edge.endVertex;
        obj.insertEdge(edge);
        break;
    case 1:
        window.clear();
        system("clear");
        cout << "Enter Start & End Vertex: ";
        cin >> edge.startVertex >> edge.endVertex;
        obj.deleteEdge(edge);
        break;
    case 2:
        window.clear();
        system("clear");
        obj.displayBoth();
        break;
    case 3:
        exit(0);
        break;
    default:
        cout << "[-] The Option is out of bounds, Please try again\n";
        break;
    }
    goto Loop;
}