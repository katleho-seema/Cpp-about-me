#include <iostream>

using namespace std;

int main(){
    int num1;
    int num2;

    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;

    // Addition
    int Add = num1 + num2;
    cout <<"Addition: " << Add << endl;
    int Subtraction = num1 - num2;
    cout <<"Subtraction: " << Subtraction << endl;
    int Multipliction = num1*num2;
    cout <<"Multiplication: " << Multipliction << endl;
    double Division = (double)num1/num2;
    cout << "Division: " << Division << endl;
    double remainder = num1 % num2;
    cout << "Remainder: " << remainder << endl;
    
    return 0;
}