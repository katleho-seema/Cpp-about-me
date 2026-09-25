#include <iostream>

using namespace std;

int main(){
    string name;
    cout << "Enter your name: " << endl;
    cin >> name;
    double mark;
    cout << "Enter your mark: " << endl;
    cin >> mark;

    cout << name <<", "<< "your mark is " << mark << "%. " << endl;
    if (mark < 50) {
        cout << "Result: Fail" << endl;
    } else if (mark >= 50 && mark < 74){
        cout << "Result: Pass" << endl;
    } else if (mark >= 75){
        cout << "Result: Pass, Very Good!" << endl;
    }

    return 0;
}