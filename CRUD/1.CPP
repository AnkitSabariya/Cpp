#include <iostream>
using namespace std;
int main()
{
    int user;
    cout << "1. Create" << endl;
    cout << "2. Read " << endl;
    cout << "3. Update " << endl;
    cout << "4. Delete " << endl;
    // cout << "Enter your choice : " << endl;
    // cin >> choice;
    cout << "Enter Value of array : ";
    cin >> user;
    int box[user];

    // CREATE ARRAY //

     for (int i = 0; i < user; i++)
    {
        cout << "Enter Array Value " <<"[" << i <<"]" << " : ";
        cin >> box[i];
    }

    // READ ARRAY //
    cout <<"============================ Read Array ===============" << endl;
    for (int i = 0; i < user; i++)
    {

        cout  << box[i] << " " << endl;
    }
     //UPDATE ARRAY //
     int newsize;
    for (int i = 0; i < user-1; i++)
    {
       
            cout << "Enter Index to Update array : ";
            cin >> box[i];
            box[i] = newsize;
            cout << "Enter New Size Of   array : ";
            cin >> newsize;
           
        
        
      
       
        
    }

}
