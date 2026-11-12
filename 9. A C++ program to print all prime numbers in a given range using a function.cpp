#include <iostream>
using namespace std;


bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true; 
    if (num % 2 == 0) return false; 

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

void printPrimesInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    cout << "Prime numbers between " << start << " and " << end << " are: ";
    printPrimesInRange(start, end);

    return 0;
}
