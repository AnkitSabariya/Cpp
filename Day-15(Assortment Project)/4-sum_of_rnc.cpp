#include <iostream>
using namespace std;

int main()
{
    // Row & col sum  from user input //
    int size, rownum, rowsum = 0, colnum, colsum = 0;

    cout << "Enter the size of the square matrix: ";
    cin >> size;

    cout << "-------------- Enter ||" << size << " x " << size << "|| Matrix ----------\n";
    int box[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Enter value [" << i << "][" << j << "] : ";
            cin >> box[i][j];
        }
    }

    cout << "|| Output: ||\n";
    cout << "-----------------------\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << box[i][j] << " ";
        }
        cout << endl;
    }

    cout << "-----------------------|| Row Sum ||----------------------------------\n";
    cout << "Enter row number: ";
    cin >> rownum;
    if (rownum >= 0 && rownum < size)
    {
        cout << "Elements of row: ";
        for (int i = 0; i < size; i++)
        {
            cout << box[rownum][i] << " "; // rownum first because box[0][0] ,box[0][1] row index constant then second column change
            rowsum += box[rownum][i];
        }
        cout << endl;
        cout << "The sum of row " << rownum << ": " << rowsum << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    cout << "-----------------------|| Column Sum ||----------------------------------\n";
    cout << "Enter column number: ";
    cin >> colnum;
    if (colnum >= 0 && colnum < size)
    {
        cout << "Elements of column: ";
        for (int j = 0; j < size; j++)
        {
            cout << box[j][colnum] << " ";// colnum second because box[0][0] ,box[1][0] col index constant then first row index  change
            colsum += box[j][colnum];
        }
        cout << endl;
        cout << "The sum of column " << colnum << ": " << colsum << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
}
