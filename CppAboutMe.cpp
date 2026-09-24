#include <iostream>

using namespace std;

int main(){
    string name;
    cout << "Enter your name: "<< endl;
    cin >> name;
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    int favNum;
    cout << "Enter your favourite number: " << endl;
    cin >> favNum;

    cout << "Hello, " << name <<"!" << endl;
    cout << "You are " << age << " years old." << endl;
    cout << "Your favourite number is " << favNum << "."<< endl;



    return 0;
}