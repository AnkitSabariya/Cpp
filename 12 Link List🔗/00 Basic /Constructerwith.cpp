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
        next = NULL; // Because new node creating same time no address
    }
};

int main()
{
    Node *Head = new Node(10);    // First node with data 10
    Node *current = new Node(20); // Second node with data 20
    Head->next = current;         // Linking the first node to second node

    current = new Node(30);     // Third node with data 30
    Head->next->next = current; // Linking the second node to third node

    current = new Node(40);           // Fourth node with data 40
    Head->next->next->next = current; // Linking the third node to fourth node

    current = new Node(50);                 // Fifth node with data 50
    Head->next->next->next->next = current; // Linking the fourth node to fifth node

    current = Head;

    // Traverse the list and print data and address of each node
    while (current != NULL)
    {
        cout << "| Node data: " << current->data << ", Address: " << current << endl;
        current = current->next; // Move to the next node
    }

    return 0;
}
