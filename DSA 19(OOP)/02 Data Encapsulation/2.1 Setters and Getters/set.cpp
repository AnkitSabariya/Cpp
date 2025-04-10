#include <iostream>
using namespace std;

// Class Declaration
class Teacher {
public:
    string name;
    string subject;
    string batch;
    int salary;

    void setdetails(string a, string b, string c, int d) {
        name = a;
        subject = b;
        batch = c;
        salary = d;
    }
};

int main() {
    Teacher t1, t2, t3, t4, t5;
    t1.setdetails("Kunj Gami", "DSA With C++", "KUNJ-DSA_WEB_02:00 PM", 100000);
    t2.setdetails("Maganbhai", "Javascript", "MAGAN-JS_WEB_03:00 PM", 200000);
    t3.setdetails("Chhaganbhai", "React", "CHHAGAN-React-js_WEB_04:00 PM", 300000);
    t4.setdetails("Rambhai", "AI & Machine learning", "RAM-AI-ML_WEB_05:00 PM", 400000);
    t5.setdetails("Vijuben", "Python", "VIJU-PYTHON_WEB_06:00 PM", 500000);

    cout << "Teacher's Name: " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Batch: " << t1.batch << endl;
    cout << "Salary: $" << t1.salary << endl;
    cout<<"----------------------------------------------\n";
    cout << "Teacher's Name: " << t2.name << endl;
    cout << "Subject: " << t2.subject << endl;
    cout << "Batch: " << t2.batch << endl;
    cout << "Salary: $" << t2.salary << endl;
    cout<<"----------------------------------------------\n";
    cout << "Teacher's Name: " << t3.name << endl;
    cout << "Subject: " << t3.subject << endl;
    cout << "Batch: " << t3.batch << endl;
    cout << "Salary: $" << t3.salary << endl;
    cout<<"----------------------------------------------\n";
    cout << "Teacher's Name: " << t4.name << endl;
    cout << "Subject: " << t4.subject << endl;
    cout << "Batch: " << t4.batch << endl;
    cout << "Salary: $" << t4.salary << endl;
    cout<<"----------------------------------------------\n";
    cout << "Teacher's Name: " << t5.name << endl;
    cout << "Subject: " << t5.subject << endl;
    cout << "Batch: " << t5.batch << endl;
    cout << "Salary: $" << t5.salary << endl;
    cout<<"----------------------------------------------\n";

    return 0;
}
