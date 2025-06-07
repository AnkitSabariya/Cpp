#include <iostream>
using namespace std;

int size = 0; // current number of elements

// Insert
void Insert(int box[])
{
    int value, index;

    cout << "--------------------------------" << endl;

    if (size == 0)
    {
        cout << "Enter array value [" << size << "] : ";
        cin >> box[size];
    }
    else
    {
        cout << "Enter index to insert (0 to " << size << ") : ";
        cin >> index;

        if (index < 0 || index > size)
        {
            cout << "Invalid index!" << endl;
            return;
        }

        // Shift elements to the right
        for (int j = size; j > index; j--)
        {
            box[j] = box[j - 1];
        }

        cout << "Enter value to insert at index [" << index << "] : ";
        cin >> value;

        box[index] = value;
    }

    size++;
    cout << "---------------------------------Inserted Successfully----------------------------------------" << endl;
}

// Read
void read(int box[])
{
    cout << "--------------------------------" << endl;
    for (int j = 0; j < size; j++)
    {
        cout << "Read The Array [" << j << "] : " << box[j] << endl;
    }
    cout << "---------------------------------Read Successfully----------------------------------------" << endl;
}

// Update
void update(int box[])
{
    int replace, j;
    cout << "--------------------------------" << endl;
    cout << "Select index no 0 to " << size - 1 << " : ";
    cin >> j;

    if (j >= 0 && j < size)
    {
        cout << "Update the value of index [" << j << "] : ";
        cin >> replace;
        box[j] = replace;
    }
    else
    {
        cout << "!! Invalid Index !!" << endl;
    }

    cout << "---------------------------------Update Successfully----------------------------------------" << endl;
}

// Delete
void remove(int box[])
{
    int delIndex;

    cout << "--------------------------------" << endl;
    cout << "Select index to delete (0 to " << size - 1 << ") : ";
    cin >> delIndex;

    if (delIndex < 0 || delIndex >= size)
    {
        cout << "!! Invalid Index !!" << endl;
        return;
    }

    // Shift elements to the left
    for (int j = delIndex; j < size - 1; j++)
    {
        box[j] = box[j + 1];
    }
    size--;

    cout << "---------------------------------Deleted Successfully----------------------------------------" << endl;
}

int main()
{
    int user;
    int box[100];

    do
    {
        cout << "\n============= MENU =============" << endl;
        cout << "Press 1 For Insert" << endl;
        cout << "Press 2 For Read" << endl;
        cout << "Press 3 For Update" << endl;
        cout << "Press 4 For Delete" << endl;
        cout << "Press 5 For Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> user;

        switch (user)
        {
        case 1:
            Insert(box);
            break;
        case 2:
            read(box);
            break;
        case 3:
            update(box);
            break;
        case 4:
            remove(box);
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (user != 5);

    return 0;
}
