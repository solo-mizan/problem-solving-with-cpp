#include <iostream>
#include <string>
using namespace std;

class Student{
    string name;
    string dept;
    long long int id;
    float marks[3];
    float totalMarks = 0;
    float averageMarks;

    public: 
    void setData(){
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter department name: ";
        getline(cin, dept);
        cout << "Enter student ID: ";
        cin >> id;
        cout << "Enter the student's marks: " << endl;
        for (int i = 0; i < 3; i++){
            cin >> marks[i];
        }
    };

    void averageMark(){
        for (int i = 0; i < 3; i++){
            totalMarks = totalMarks + marks[i];
        }
        averageMarks = totalMarks / 3;
        cout << endl << "Average marks: " << averageMarks;
    }
};

int main () {
    Student ob;
    ob.setData();
    ob.averageMark();
    return 0;
}