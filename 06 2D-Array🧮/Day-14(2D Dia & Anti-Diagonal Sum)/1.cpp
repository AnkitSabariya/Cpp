#include <iostream>
using namespace std;

int main()
{ // 2D Diagonal sum
    int row, col, sum = 0;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;
    int box[row][col];

    cout << "------Enter ||" << row << " x " << col << "|| Matrix ----------\n";
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
            if (i == j)
            {
                sum += box[i][j];
            }

            cout << box[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "-----------------------\n";
    cout << "Total Diagonal sum : " << sum;

    return 0;
}