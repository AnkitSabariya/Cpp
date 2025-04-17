#include <iostream>
using namespace std;

// Node class definition
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    // 🔹 Step 1: Creating 3 nodes
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    // 🔹 Step 2: Linking the nodes
    head->next = second;
    second->next = third;
    third->next = NULL; // Last node points to NULL

    // 🔹 Step 3: Traversing the list
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
