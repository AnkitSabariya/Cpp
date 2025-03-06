#include<iostream>
using namespace std;

int main()
{
    
   int user,avg,sum = 0;
   cout << "Enter array size : ";
   cin>>user;
   int box[user];
   for (int i = 0; i < user; i++)
   {
      cout <<"a["<< i <<"] : ";
      cin>>box[i];
      sum +=box[i];
   }
   cout << "Total Sum : " << sum <<endl;
   cout << "devwide By Quantanity : " << user <<endl;
   avg = sum / user;
   cout <<"Average of an Array : "<<   (float)avg;
   
}