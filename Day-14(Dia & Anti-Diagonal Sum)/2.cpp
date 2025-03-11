#include <iostream>
using namespace std;

int main()
{ // 2D Anti-Diagonal sum //
    // user input 4 but i < row (3 < 4) 
    // ______________
    //  |0 1 2 3 4
    // 0|1 2 3 4
    // 1|5 6 7 8
    // 2|1 2 3 4 
    // 3|5 6 7 8 
    // 4|
    //---------------------
    // Anti diagonal //
    // (0,3),(1,2),(2,1),(3,0) = sum = 3 
    // 3(sum) = 3(row(4)-1)
    // if(i + j == row - 1){
    //    0 + 3 == 4 - 1
    //  }
    // 
    int row, col, sum = 0, temp;
    cout << "Enter no. Of Rows : ";
    cin >> row;
    cout << "Enter no. Of columns : ";
    cin >> col;
    int box[row][col];
    if (row == col)
    {
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
                if (i + j == row - 1)
                {
                    sum += box[i][j];
                }

                cout << box[i][j] << "  ";
            }
            cout << endl;
        }
        cout << "-----------------------\n";
        cout << "Total Diagonal sum : " << sum;
    }
    else
    {
        cout << "-----------------------\n";
        cout << "Please input Row And Column Size same ";
    }
}