#include <iostream>
using namespace std;

class car
{
private:
    string brand;      // Car brand name:
    string modelname;  // Car model name:
    int modelyear;     // Car model year:
    double modelprice; // Car model price:
    int modelmileage;  // Car model mileage (in km/l):

public:
    void getcarinfo(string brand, string modelname, int modelyear, double modelprice, int modelmileage)
    {
        this->brand = brand;
        this->modelname = modelname;
        this->modelyear = modelyear;
        this->modelprice = modelprice;
        this->modelmileage = modelmileage;
    }

    void displayCarInfo()
    {
        cout << "Brand: " << brand
             << ", Model: " << modelname
             << ", Year: " << modelyear
             << ", Price: " << modelprice
             << ", Mileage: " << modelmileage << " km/l" << endl;
    }
};

int main()
{
    int user, y, m;
    double p;
    string b, n;
    cout << "Enter Size of Array: ";
    cin >> user;

    car arr[user]; // Array of car objects

    for (int i = 0; i < user; i++)
    {
        cout << "Enter Car " << i + 1 << " Details:\n";
        cout << "Car brand name: ";
        cin >> b;
        cout << "Car model name: ";
        cin >> n;
        cout << "Car model year: ";
        cin >> y;
        cout << "Car model price: ";
        cin >> p;
        cout << "Car model mileage (in km/l): ";
        cin >> m;

        arr[i].getcarinfo(b, n, y, p, m); // Store data using object
    }

    cout << "\nCar Details:\n";
    for (int i = 0; i < user; i++)
    {
        cout << "Car " << i + 1 << " -> ";
        arr[i].displayCarInfo(); // Display details using object
    }

    return 0;
}
