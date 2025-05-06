#include <iostream>
using namespace std;

void Enqueue(int queue[], int &front, int &rear, int size)
{
    if (rear == size - 1)
    {
        cout << "Queue Overflow! Cannot insert more elements.\n";
        return;
    }

    if (front == -1) {
        front = 0; // Initialize front when first element is enqueued
    }
    rear++; // Increment rear position

    cout << "Enter value to Enqueue: ";
    cin >> queue[rear];
    cout << queue[rear] << " Enqueued successfully.\n";
}

void Dequeue(int queue[], int &front, int &rear)
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty! Nothing to Dequeue.\n";
        return;
    }

    cout << queue[front] << " Dequeued successfully.\n";
    front++; // Increment front to point to next element

    // Reset front and rear to -1 if queue is empty after Dequeue
    if (front > rear) {
        front = rear = -1;
    }
}

void Front(int queue[], int front, int rear)
{
    if (front == -1 || front > rear)
        cout << "Queue is empty. No front element.\n";
    else
        cout << "Front element is: " << queue[front] << endl;
}

void Rear(int queue[], int front, int rear)
{
    if (front == -1 || front > rear)
        cout << "Queue is empty. No rear element.\n";
    else
        cout << "Rear element is: " << queue[rear] << endl;
}

void display(int queue[], int front, int rear)
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty.\n";
        return;
    }

    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++)
        cout << queue[i] << " ";
    cout << endl;
}

void isEmpty(int front, int rear)
{
    if (front == -1 || front > rear)
        cout << "Queue is empty.\n";
    else
        cout << "Queue is not empty.\n";
}

void isFull(int rear, int size)
{
    if (rear == size - 1)
        cout << "Queue is full.\n";
    else
        cout << "Queue is not full.\n";
}

void queueSize(int front, int rear)
{
    if (front == -1 || front > rear)
        cout << "Total elements in queue: 0\n";
    else
        cout << "Total elements in queue: " << (rear - front + 1) << endl;
}

int main()
{
    int userOption, size, front = -1, rear = -1;
    cout << "Enter size of queue: ";
    cin >> size;

    int *queue = new int[size];

    do
    {
        cout << "\n============= Queue MENU =============\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Front\n";
        cout << "4. Rear\n";
        cout << "5. Display\n";
        cout << "6. Is Empty\n";
        cout << "7. Is Full\n";
        cout << "8. Queue Size\n";
        cout << "0. Exit\n";
        cout << "--------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> userOption;

        switch (userOption)
        {
        case 1:
            Enqueue(queue, front, rear, size);
            break;
        case 2:
            Dequeue(queue, front, rear);
            break;
        case 3:
            Front(queue, front, rear);
            break;
        case 4:
            Rear(queue, front, rear);
            break;
        case 5:
            display(queue, front, rear);
            break;
        case 6:
            isEmpty(front, rear);
            break;
        case 7:
            isFull(rear, size);
            break;
        case 8:
            queueSize(front, rear);
            break;
        case 0:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (userOption != 0);

    delete[] queue; // Deallocate memory
   
}
