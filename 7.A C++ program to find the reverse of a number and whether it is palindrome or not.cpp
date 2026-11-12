#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num/=10;
    }

    cout << "Reversed Number: " << reversedNum << endl;
    if (originalNum == reversedNum) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}
