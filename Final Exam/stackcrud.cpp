#include <iostream>
using namespace std;

void push(int stack[], int &top, int size)
{
    if (top == size - 1)
    {
        cout << "Stack Overflow! Cannot insert more elements.\n";
        return;
    }
    cout << "Enter value to push: ";
    top++;
    cin >> stack[top];
    cout << stack[top] << " pushed successfully.\n";
}

void pop(int stack[], int &top)
{
    if (top == -1)
    {
        cout << "Stack is empty! Nothing to pop.\n";
        return;
    }

    cout << stack[top] << "popped successfully..\n";
    top--;
}

void peek(int stack[], int top)
{
    if (top == -1)
        cout << "Stack is empty. No top element.\n";
    else
        cout << "Top element is: " << stack[top] << endl;
}

void display(int stack[], int top)
{
    if (top == -1)
    {
        cout << "Stack is empty.\n";
        return;
    }

    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++)
        cout << stack[i] << " ";
    cout << endl;
}

void isEmpty(int top)
{
    if (top == -1)
        cout << "Stack is empty.\n";
    else
        cout << "Stack is not empty.\n";
}

void isFull(int top, int size)
{
    if (top == size - 1)
        cout << "Stack is full.\n";
    else
        cout << "Stack is not full.\n";
}

void stackSize(int top)
{
    cout << "Total elements in stack: " << top + 1 << endl;
}

int main()
{
    int user, size, top = -1;
    cout << "Enter size of stack: ";
    cin >> size;

    int *stack = new int[size];

    do
    {
        cout << "\n============= STACK MENU =============\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Is Empty\n";
        cout << "6. Is Full\n";
        cout << "7. Stack Size\n";
        cout << "0. Exit\n";
        cout << "--------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> user;

        switch (user)
        {
        case 1:
            push(stack, top, size);
            break;
        case 2:
            pop(stack, top);
            break;
        case 3:
            peek(stack, top);
            break;
        case 4:
            display(stack, top);
            break;
        case 5:
            isEmpty(top);
            break;
        case 6:
            isFull(top, size);
            break;
        case 7:
            stackSize(top);
            break;
        case 0:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (user != 0);
    return 0;
}
