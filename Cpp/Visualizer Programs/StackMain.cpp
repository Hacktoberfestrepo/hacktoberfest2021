#include "Stack.cpp"
int main()
{
    char opt;
    int size, number;
    cout << "Enter Size: ";
    cin >> size;
    Stack obj(size);
loop:
    cout << "0. Input Array\n1. Push\n2. Pop\n3. Is Empty\n4. Is Full\n5. Display\n6. Reverse Stack\n7. Exit\n ";
    cout << "Option: ";
    cin >> opt;
    switch (opt)
    {
    case '0':
        obj.inputArr();
        break;
    case '1':
        cin >> number;
        obj.size++;
        obj.push(number);
        break;
    case '2':
        obj.pop();
        break;
    case '3':
        if (obj.isEmpty() != true)
            cout << "Is not empty !\n";
        else
            cout << "Is Empty !\n";
        break;
    // case '4':
    //     if (obj.isFull() == true)
    //         cout << "Is FULL\n";
    //     else
    //         cout << "Is not FULL !\n";
    //     break;
    case '5':
        obj.display();
        break;
    case '6':
    {
        int tempVal, i=0, currentIndex = 0 ,*tempArr = new int[obj.size];
        node* traverseNode = headNode;
        while(traverseNode !=NULL)
        {
            tempArr[i] = traverseNode->data;    
            i++;
        }
        obj.makeNull();
        obj.reverseQueue(tempArr, tempVal, currentIndex, size);
        free(tempArr);
        break;
    }
    case '7':
        exit(1);
        break;
    default:
        cout << "Options have exceeded the limit please try again\n ";
        break;
    }
    goto loop;
    return 0;
}
