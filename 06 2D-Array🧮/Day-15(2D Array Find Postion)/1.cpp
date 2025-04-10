#include <iostream>
using namespace std;

int main()
{
    // Array Find index postion
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;
    cout << "--------------Enter ||" << row << " x " << col << "|| Matrix ----------\n";
    int box[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter value [" << i << "][" << j << "] : ";
            cin >> box[i][j];
        }
    }
    cout << "--------|| Output: ||--------------\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << box[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "---------------------------\n";
    int pos;
    cout << "Enter Elemnet : ";
    cin >> pos;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (box[i][j] == pos)
            {
                cout << pos << " Postion is : [" << i << "][" << j << "]";
            }
        }
    }
}
