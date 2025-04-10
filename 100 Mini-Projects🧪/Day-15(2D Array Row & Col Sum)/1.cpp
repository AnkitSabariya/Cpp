#include <iostream>
using namespace std;

int main()
{
    // Row sum //
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
    cout << "|| Output: ||\n";
    cout << "-----------------------\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << box[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-----------------------|| Row Sum ||----------------------------------\n";
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {

            sum += box[i][j];
        }
        cout << "Row [" << i << "] Sum is : " << sum << endl;
    }

    return 0;
}