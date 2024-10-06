#include <iostream>
using namespace std;

// Maximum size of array or Dequeue
#define MAX 100

// A structure to represent a Deque
class Deque {
    int arr[MAX];
    int front;
    int rear;
    int size;

public:
    Deque(int size) {
        front = -1;
        rear = 0;
        this->size = size;
    }

    // Operations on Deque:
    void insertFront(int key);
    void insertRear(int key);
    void deleteFront();
    void deleteRear();
    bool isFull() const;
    bool isEmpty() const;
    int getFront() const;
    int getRear() const;
    void printDeque() const;
};

// Checks whether Deque is full or not.
bool Deque::isFull() const {
    return (front == 0 && rear == size - 1) || (front == rear + 1);
}

// Checks whether Deque is empty or not.
bool Deque::isEmpty() const {
    return front == -1;
}

// Inserts an element at front
void Deque::insertFront(int key) {
    if (isFull()) {
        cout << "Overflow\n";
        return;
    }

    // If queue is initially empty
    if (isEmpty()) {
        front = rear = 0;
    } else {
        front = (front == 0) ? size - 1 : front - 1;
    }

    arr[front] = key;
}

// Inserts an element at the rear
void Deque::insertRear(int key) {
    if (isFull()) {
        cout << "Overflow\n";
        return;
    }

    // If queue is initially empty
    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear == size - 1) ? 0 : rear + 1;
    }

    arr[rear] = key;
}

// Deletes element at front end of Deque
void Deque::deleteFront() {
    if (isEmpty()) {
        cout << "Underflow\n";
        return;
    }

    if (front == rear) {
        front = rear = -1; // Queue is now empty
    } else {
        front = (front == size - 1) ? 0 : front + 1;
    }
}

// Deletes element at rear end of Deque
void Deque::deleteRear() {
    if (isEmpty()) {
        cout << "Underflow\n";
        return;
    }

    if (front == rear) {
        front = rear = -1; // Queue is now empty
    } else {
        rear = (rear == 0) ? size - 1 : rear - 1;
    }
}

// Returns front element of Deque
int Deque::getFront() const {
    if (isEmpty()) {
        cout << "Underflow\n";
        return -1;
    }
    return arr[front];
}

// Returns rear element of Deque
int Deque::getRear() const {
    if (isEmpty()) {
        cout << "Underflow\n";
        return -1;
    }
    return arr[rear];
}

// Print the elements of Deque
void Deque::printDeque() const {
    if (isEmpty()) {
        cout << "Deque is empty!\n";
        return;
    }

    int i = front;
    while (true) {
        cout << arr[i] << " ";
        if (i == rear) break;
        i = (i + 1) % size;
    }
    cout << endl;
}

// Driver program to test the above functions
int main() {
    cout << "Enter the size of Deque required: ";
    int n;
    cin >> n;

    Deque dq(n);

    // Inserting elements to front of Deque
    cout << "Enter " << n << " elements to insert at front: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        dq.insertFront(num);
    }

    // Printing the current status of Deque after insertion to front end
    cout << "Showing the Deque after insertion from front:\n";
    dq.printDeque();

    // Accessing the element at front end of the array of Deque
    cout << "\nElement present at front = " << dq.getFront() << endl;

    // Accessing the element at rear end of the array of Deque
    cout << "Element present at rear = " << dq.getRear() << endl;

    // Deleting an element from front
    cout << "\nDeleting element from front.\n";
    dq.deleteFront();
    cout << "After deletion, status of Deque:\n";
    dq.printDeque();

    // Deleting an element from rear
    cout << "\nDeleting element from rear.\n";
    dq.deleteRear();
    cout << "After deletion, status of Deque:\n";
    dq.printDeque();

    // Inserting an element from rear end of Deque
    dq.insertRear(10);
    cout << "\nAfter inserting element (10) from the rear end:\n";
    dq.printDeque();

    return 0;
}

