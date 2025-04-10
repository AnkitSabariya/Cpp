#include <iostream>
using namespace std;
void reverse(string user)
{
    int count = 0;
    for (int i = 0; i < user[i]; i++)
    {
        count++;
        cout << user[i] ;
    }
    cout << endl;
    cout << count<< endl;
    for (int i = 0; i < count; i++)
    {
        cout << user[count - i - 1];
    }
}

int main()
{
    string user;
    cout << "Enter a string: ";
    cin >> user;
    cout << "------------------------------\n";
    reverse(user);
}
// Alternative
// #include <iostream>
// using namespace std;

// void reverse(string user) {
//     int count = 0;

//     // Count the length of the string manually
//     while (user[count] != '\0') {
//         count++;
//     }

//     // Print the reversed string
//     for (int i = count - 1; i >= 0; i--) {
//         cout << user[i];
//     }
//     cout << endl;
// }

// int main() {
//     string user;
//     cout << "Enter a string: ";
//     cin >> user;
//     cout << "------------------------------\n";
//     reverse(user);

//     return 0;
// }
