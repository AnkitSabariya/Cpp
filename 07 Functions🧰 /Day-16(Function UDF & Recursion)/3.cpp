#include <iostream>
using namespace std;
char vowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        cout <<"Vowel...";

    }
    else{
        cout <<"Consonant...";

    }
    return 0;
}
int main()
{
    char a;

    cout << "Enter The  value : ";
    cin >> a;

    cout <<"-------------------------\n";

      vowel(a);
}