/*
Write a program that takes two numbers as input and show the largest number as output using constructor function where the numbers will be passed as arguments to the constructor.
*/

#include <iostream>
using namespace std;

class Number {
    public:
        Number(int x, int y){
            if(x>y){
                cout << x << " is greater than " << y << endl;
            }
            else{
                cout << y << " is greater than " << x << endl;
            }
        };
};

int main () {
        Number ob(90, 45);
        return 0;
}