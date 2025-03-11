#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int a[row][col], b[row][col], c[row][col];

    cout << "\nEnter elements for first " << row << " x " << col << " matrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements for second " << row << " x " << col << " matrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }

    cout << "\nFirst Matrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSecond Matrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSum of Matrices:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
