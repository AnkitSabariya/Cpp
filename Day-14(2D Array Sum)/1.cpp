#include <iostream>
using namespace std;

int main()
{  // 2D Array sum
    int row, col,sum=0;
    cout << "Enter no. Of Rows : ";
    cin >> row;
    cout << "Enter no. Of columns : ";
    cin >> col;
    int box[row][col];

    cout << "------Enter ||" <<row << " x " << col <<"|| Matrix ----------\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter value [" << i <<"][" << j <<"] : ";
            cin >> box[i][j];

        }
       
    }
    cout << "|| Output: ||\n";
    cout <<"-----------------------\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << box[i][j] <<"  ";
            sum+=box[i][j];
        }
        cout << endl;
    }
    cout <<"-----------------------\n";
    cout<<"Total Matrix sum : " << sum;


    return 0;
}