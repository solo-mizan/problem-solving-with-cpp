#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
        string student_name;
        int age;
        int marks[5];
        int totalMarks = 0;
        int averageMarks;

        void setData(){
            cout << "Enter student name: ";
            getline(cin, student_name);
            cout << "Enter student age: ";
            cin >> age;
            cout << "Enter marks: " << endl;
            for(int i = 0; i < 5; i++){
                cin >> marks[i];
            }
        }

        void totalMark(){
            for (int i = 0; i < 5; i++){
                totalMarks = totalMarks + marks[i];
            }
            cout << "Total marks: " << totalMarks << endl;
        }

        void averageMark(){
            averageMarks = totalMarks / 5;
        cout << "Average marks: " << averageMarks << endl;
        }

        void showStudentDetails(){
        cout << "Student name: " << student_name << endl;
        cout << "Student age: " << age << endl;
        }
};

int main () {

        Student ob;
        ob.setData();
        ob.totalMark();
        ob.averageMark();
        ob.showStudentDetails();

        return 0;
};