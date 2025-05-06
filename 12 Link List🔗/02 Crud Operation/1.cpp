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
    // Beginning OF The List
    void push_front(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head; // Head before add 10 -[20]
            head = newnode;
        }
    }
    // Beginning OF The List
    void insert(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            head->next = newnode->next = tail; // Head before add 10 -[20]
            head = newnode;
        }
    }
    // Ending OF The List
    void push_back(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    // Traverse Link List
    void read()
    {
        int count = 0;

        Node *current = head;
        while (current != NULL)
        {
            if (count == 0)
            {
                cout << count << " Head " << " : " << current->data << " :- " << current << endl;
            }
            else
            {

                cout << count << "Node " << " : " << current->data << " :- " << current << endl;
            }
            count++;
            current = current->next;
        }
    }
};
int main()
{
    int user = 0, insertchoice = 0, val, loop;
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
            // =================== Insert ========================
        case 1:
            cout << "You Selected Insert :-" << endl;
            cout << "PRESS 1 For PushFront" << endl;
            cout << "PRESS 2 For Insert" << endl;
            cout << "PRESS 3 For Pushback" << endl;
            cout << "Choice: ";
            cin >> insertchoice;

            switch (insertchoice)
            {
                // Starting
            case 1:
                cout << "How many Nodes Add from starting: ";
                cin >> loop;

                for (int i = 0; i < loop; i++)
                {

                    cout << "Enter value to push front: ";
                    cin >> val;
                    list.push_front(val);
                }

                cout << "Push_Front Successfully...." << endl;

                // At any position
            case 2:
                cout << "How many Nodes Add from starting: ";
                cin >> loop;

                for (int i = 0; i < loop; i++)
                {

                    cout << "Enter value to push front: ";
                    cin >> val;
                    list.insert(val);
                }

                cout << "insert Successfully...." << endl;
                break;

                // Ending
            case 3:
                cout << "How many Nodes Add from Ending: ";
                cin >> loop;

                for (int i = 0; i < loop; i++)
                {

                    cout << "Enter value to push Back: ";
                    cin >> val;
                    list.push_front(val);
                }

                cout << "Push_Back Successfully...." << endl;
                break;

            default:
                cout << "Invalid Insert Choice" << endl;
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