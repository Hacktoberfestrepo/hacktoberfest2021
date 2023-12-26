#include <iostream>
using namespace std;
class ListNode {
public:
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class LinkedList {
public:
    ListNode *head;

    LinkedList() : head(nullptr) {}

    void append(int value) {
        if (!head) {
            head = new ListNode(value);
        } else {
            ListNode *current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = new ListNode(value);
        }
    }

    int findMiddle() {
        if (!head) {
            return -1;  // Or any other value indicating an empty list
        }

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow->val;
    }

    // Destructor to free allocated memory
    ~LinkedList() {
        while (head) {
            ListNode *temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Function to input values from the user
void inputLinkedList(LinkedList &linkedList) {
    int n, value;
    cout<< "Enter the number of elements in the linked list: ";
    cin>> n;

    cout << "Enter the values of the linked list: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        linkedList.append(value);
    }
}

// Example Usage:
int main() {
    LinkedList linkedList;

    // Input values from the user
    inputLinkedList(linkedList);

    int middleValue = linkedList.findMiddle();
    cout << "Middle value of the linked list: " << middleValue << endl;

    return 0;
}
