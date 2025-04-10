#include <iostream>
using namespace std;
int main()
{
    //     Write a C++ program to input electricity unit charges and calculate total electricity bill according to the given condition:
    // • For first 50 units Rs. 0.50/unit

    // • For next 100 units Rs. 0.75/unit

    // • For next 100 units Rs. 1.20/unit

    // . For unit above 250 Rs. 1.50/unit

    // • An additional surcharge of 20% is added to the bill
    int unit;
    float bill  = 0;
    cout << "Enter Total bill Of unit : ";
    cin >> unit;
    // • For first 50 units Rs. 0.50/unit
    if (0 < unit && unit <= 50)
    {
        bill = unit * 0.5;
        cout<<"First under 50 unit Of Charge : " << bill << endl; 
    }
    // • For next 100 units Rs. 0.75/unit
    else if (unit > 50 && unit <=150)
    {

        bill = (50 * 0.5) + ((unit - 50) * 0.75);
        cout<<"51 To 150 Next 100 unit Of Charge : " << bill << endl; 
    }
    // • For next 150 units Rs. 1.20/unit
    else if (unit > 150 && unit <= 250)
    {

        bill = (50 * 0.5) + (100 * 0.75) + ((unit - 150) * 1.20);
        cout<<"151 To 300 Next 100 unit Of Charge : " << bill << endl; 
    }
    // . For unit above 250 Rs. 1.50/unit
    else
    {
        bill = (50 * 0.5) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);
        cout<<"For unit above 250 Unit : " << bill << endl; 
    }
    cout<<"---------------------------------------------------------------------------------"<<endl;
     // Add a surcharge of 20%
     float totalBill = bill + (bill * 0.20);
     cout << "------------------------------------------------------" << endl;
     cout << "Your Total Electricity Bill: Rs. " << totalBill << endl;
 
    
}