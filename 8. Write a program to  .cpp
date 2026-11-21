#include <iostream>
using namespace std;

class ABC {
public:
    void display() 
	{
        cout << "Northern University Buseness & Thanology, Khulna" << endl;
    }
};

int main() {
    ABC a;
    void (ABC::*ptr)() = &ABC::display;


    (a.*ptr)();

    return 0;
}
