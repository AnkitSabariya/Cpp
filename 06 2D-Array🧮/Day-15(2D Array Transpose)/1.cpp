#include <iostream>
using namespace std;

int main()
{
    // Transpose Array Row Convert in to  Columns is called //
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

            cout << box[i][j] << " ";
        }
        cout << endl;
    }
    cout << "|| Array Transpose Row Convert Columns ||\n";
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << box[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
