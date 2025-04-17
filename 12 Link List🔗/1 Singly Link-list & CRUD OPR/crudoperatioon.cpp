#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class LinkedList
{
    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node *n1 = new Node(val);
        if (head == NULL)
        {
            head = tail = n1;
        }
        else
        {
            n1->next = head;
            head = n1;
        }
    }
    // Traverce Link List
    void read()
    {

        Node *current = head;
        while (current != NULL)
        {
            cout << "Node " << " : " << current->data << " :- " << current << endl;
            current = current->next;
        }
    }
};
int main()
{
    int user = 0, insertchoice = 0, val;
    LinkedList list;
    do
    {
        cout << "============= Link List Crud ===================" << endl;
        cout << "1 Insert : " << endl;
        cout << "2 Read : " << endl;
        cout << "3 Update : " << endl;
        cout << "4 Delete : " << endl;
        cout << "0 Exit..  " << endl;
        cout << "Press Any One option : ";
        cin >> user;
        cout << "---------------------------------------" << endl;

        switch (user)
        {
        case 1:
            cout << "You Selected Insert :-" << endl;
            cout << "PRESS 1 For PushFront" << endl;
            cout << "PRESS 2 For Insert" << endl;
            cout << "PRESS 3 For Pushback" << endl;
            cout << "Choice: ";
            cin >> insertchoice;
            switch (insertchoice)
            {
            case 1:
                cout << "Enter value to push front";
                cin >> val;
                list.push_front(val);
                cout << "Push_front Successfully....";

                break;

            case 2:
                // push_back();
                break;

            default:
                cout << "Invalid Choice" << endl;
                break;
            }

            break;
        case 2:
            list.read();

            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }

    } while (user != 0);

    return 0;
}