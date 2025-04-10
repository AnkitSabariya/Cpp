#include <iostream>
using namespace std;

int main (){

    int user , first = 1 , second = -1 , temp ;
    cout << "enter the number : " ;
    cin >> user ;

    for (int i = 0; i < user ; i++)
    {
        temp = first + second ; // 1 + -1 = 0 , 0 + 1 = 1 , 1 + 1 = 2 , 2 + 1 = 3 ,
        cout << temp << " " ;
        second = first ; // 1 , 1 , 1 , 2
        first = temp ;  // 0 , 1 , 2 , 3
    }

}