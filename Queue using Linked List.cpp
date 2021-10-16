// Queue using Linked List
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Queue
{
    int size;
    Node *front, *rear;
    Queue()
    {
        front = NULL;
        rear = NULL;
        size = 0;
    }

    void enqueue(int x)
    {
        Node *temp = new Node(x);
        if (front == NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
        size++;
    }

    void dequeue()
    {
        if (front == NULL)
        {
            return;
        }

        Node *temp = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        delete temp;
        size--;
    }

    int getSize()
    {
        return size;
    }
};
