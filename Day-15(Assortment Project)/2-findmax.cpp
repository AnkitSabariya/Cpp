#include <iostream>
using namespace std;

int main()
{
    // 2D Array Find Max Value //
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
    int max = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (box[i][j] > max)
            {
                max = box[i][j];
            }
        }
    }
    cout << "The largest elements is : " << max;
}