#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newnode = new Node(val);
        if (!head) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
        cout << "Inserted at front." << endl;
    }

    void push_back(int val) {
        Node* newnode = new Node(val);
        if (!head) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
        cout << "Inserted at end." << endl;
    }

    void insert_at_position(int pos, int val) {
        if (pos <= 0) {
            cout << "Invalid position." << endl;
            return;
        }

        Node* newnode = new Node(val);
        if (pos == 1) {
            newnode->next = head;
            head = newnode;
            if (!tail) tail = newnode;
            cout << "Inserted at position " << pos << "." << endl;
            return;
        }

        Node* temp = head;
        int count = 1;
        while (temp && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << " Position out of range." << endl;
            return;
        }

        newnode->next = temp->next;
        temp->next = newnode;
        if (newnode->next == NULL) tail = newnode;
        cout << "Inserted at position " << pos << "." << endl;
    }

    void update_at_position(int pos, int val) {
        if (pos <= 0 || !head) {
            cout << " Invalid position or empty list." << endl;
            return;
        }

        Node* temp = head;
        int count = 1;
        while (temp && count < pos) {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << " Position out of range." << endl;
            return;
        }

        temp->data = val;
        cout << "Node at position " << pos << " updated." << endl;
    }

    void delete_at_position(int pos) {
        if (!head || pos <= 0) {
            cout << " Cannot delete. Empty list or invalid position." << endl;
            return;
        }

        if (pos == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            if (!head) tail = NULL;
            cout << "Deleted node at position 1." << endl;
            return;
        }

        Node* prev = NULL;
        Node* curr = head;
        int count = 1;

        while (curr && count < pos) {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (!curr) {
            cout << " Position out of range." << endl;
            return;
        }

        prev->next = curr->next;
        if (curr == tail) tail = prev;
        delete curr;
        cout << "Deleted node at position " << pos << "." << endl;
    }

    void read() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        Node* current = head;
        int count = 1;
        while (current) {
            if (current == head)
                cout << count << " - Head: " << current->data << endl;
            else
                cout << count << " - Node: " << current->data << endl;

            current = current->next;
            count++;
        }
    }
};

int main() {
    LinkedList list;
    int choice = -1;

    while (choice != 0) {
        cout << "= << endl====== Linked List CRUD =======" << endl;
        cout << "1. Insert at Front" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Insert at Position" << endl;
        cout << "4. Update Node at Position" << endl;
        cout << "5. Delete Node at Position" << endl;
        cout << "6. Display List" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        int val, pos;
        switch (choice) {
        case 1:
            cout << "Enter value to insert at front: ";
            cin >> val;
            list.push_front(val);
            break;

        case 2:
            cout << "Enter value to insert at end: ";
            cin >> val;
            list.push_back(val);
            break;

        case 3:
            cout << "Enter position to insert: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            list.insert_at_position(pos, val);
            break;

        case 4:
            cout << "Enter position to update: ";
            cin >> pos;
            cout << "Enter new value: ";
            cin >> val;
            list.update_at_position(pos, val);
            break;

        case 5:
            cout << "Enter position to delete: ";
            cin >> pos;
            list.delete_at_position(pos);
            break;

        case 6:
            list.read();
            break;

        case 0:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << " Invalid choice. Try again!" << endl;
        }
    }

    return 0;
}
