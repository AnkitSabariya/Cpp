#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int>a;
    // push back new elment frome last
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    a.push_back(50);
    cout <<"Using For Loop : ";
    for (int i = 0; i < a.size(); i++)
    {
     cout <<a[i] <<" ";  
    }
    cout << endl;
    cout <<"Using For Each Loop : ";
    for (int i : a) cout << i <<" ";
    cout << endl;

    
    

}