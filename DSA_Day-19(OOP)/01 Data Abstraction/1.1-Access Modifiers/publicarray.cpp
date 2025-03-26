#include <iostream>
using namespace std;
class car
{
public:
    string brand;     // Car brand name:
    string modelname; // Car  model name:
    int modelyear;    // Car  model year:
    int modelprice;   // Car  model of price:
    int modelmileage; // Car model milages(in km):
};

int main()
{
    int user;
    cout << "Enter Size of Array: ";
    cin >> user;
    car arr[user]; // not int
    for (int i = 0; i < user; i++)
    {
        cout << "Enter Car " << i + 1 << " Details:\n";
        cout << "Car brand name: ";
        cin >> arr[i].brand;
        cout << "Car model name: ";
        cin >> arr[i].modelname;
        cout << "Car model year: ";
        cin >> arr[i].modelyear;
        cout << "Car model price: ";
        cin >> arr[i].modelprice;
        cout << "Car model milages(in km): ";
        cin >> arr[i].modelname;
    }
    cout << "\nCar Details:\n";
    for (int i = 0; i < user; i++)
    {
        cout << "Car " << i + 1 << " -> Brand: " << arr[i].brand
             << ", Model: " << arr[i].modelname
             << ", Year: " << arr[i].modelyear
             << ", Price: " << arr[i].modelprice
             << ", Mileage: " << arr[i].modelmileage << " km/l\n";
    }
}