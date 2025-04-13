#include<iostream>
using namespace std;

void table(int val){
    
    for (int i = 1; i <= 10; i++)
    {
        cout << val << " X " << i << " = " << i*val << endl; 
        
   
    }
    
}

int main()
{   
    for (int i = 1; i <= 100; i++)
    {
        table(i);
        cout << "-----------";
    }
    
    
}
