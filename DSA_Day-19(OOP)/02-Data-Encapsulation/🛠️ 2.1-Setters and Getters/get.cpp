#include <iostream>
using namespace std;

// Class Declaration
class Teacher
{
    private:
    int salary;
    string name;
    string subject;
    string batch;
    // mathod are public so access private variable to all in code 
    public:
    void setdetails(string a, string b, string c, int d)
    {
        name = a;
        subject = b;
        batch = c;
        salary = d;
    }
    void getdetails()
    {
        cout << "Teacher's Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Batch: " << batch << endl;
        cout << "Salary: $" << salary << endl;
        cout << "-----------------------------------------------\n";
    }
};

int main()
{
    Teacher t1, t2, t3, t4, t5;
    //Set Details Function Run
    t1.setdetails("Kunj Gami", "DSA With C++", "KUNJ-DSA_WEB_02:00 PM", 100000);
    t2.setdetails("Maganbhai", "Javascript", "MAGAN-JS_WEB_03:00 PM", 200000);
    t3.setdetails("Chhaganbhai", "React", "CHHAGAN-React-js_WEB_04:00 PM", 300000);
    t4.setdetails("Rambhai", "AI & Machine learning", "RAM-AI-ML_WEB_05:00 PM", 400000);
    t5.setdetails("Vijuben", "Python", "VIJU-PYTHON_WEB_06:00 PM", 500000);
    cout << "---------------Get Details Function Run------------\n";
    t1.getdetails();
    t2.getdetails();
    t3.getdetails();
    t4.getdetails();
    t5.getdetails();

    return 0;
}
