#include<iostream>
using namespace std;
int max(){
     // Descending Order //
     int size,max;
     cout << "Enter Array  Size :";
     cin >>size;
     int box[size];
     cout << "--------------------Enter Value [0 to " << size << "]-----------------------  \n";
     for (int i = 0; i < size; i++)
     {
         cout << "Enter Value [" << i << "] : ";
         cin >> box[i];
     }
     for (int i = 0; i < size-1; i++)
     {
        for (int j = 0; j < size -i-1; j++)
        {
         if (box[j]< box[j+1])
         {
             max = box[j];
             box[j] = box[j+1];
             box[j+1] = max;
             
         }
         
        }
        
     }
    
     cout << "----------------------\n";
     cout << "|| Output: ||\n";
     cout << "Descending Order :";
     for (int i = 0; i < size; i++)
     {
         cout << box[i] << " ";
     }
     cout << "\n";
     cout << "Maximum Value is : " << box[0];
     
 
     return 0;
}

int main()
{
    max();
   
}