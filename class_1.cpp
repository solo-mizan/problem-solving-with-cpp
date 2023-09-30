#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
    string name;
    string dept;
    long long int id;

    public:
    void setData(){
        cout << "Enter name: ";
        getline(cin, name);
        cout << endl
             << "Enter department name: ";
        getline(cin, dept);
        cout << endl
             << "Enter ID: ";
        cin >> id;
        cout << endl;
    };

    void printData(){
        cout << "Student name: " << name << endl;
        cout << "Department name: " << dept << endl;
        cout << "ID number: " << id;
    };
};

int main () {

    Student ob;
    ob.printData();
    ob.printData();

    return 0;
}