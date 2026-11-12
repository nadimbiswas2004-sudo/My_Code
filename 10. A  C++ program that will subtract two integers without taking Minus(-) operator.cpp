#include <iostream>
using namespace std;

int main() {
    int num1, num2,sub=0;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;
    sub= num1+ (~num2+1);
    cout<<"Enter the Subtract number:";
    cout<<sub;

    return 0;
}
