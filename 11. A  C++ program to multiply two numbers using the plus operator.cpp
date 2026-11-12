#include <iostream>
using namespace std;

int main()
{
    int num1, num2,mul=0;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

      for(int i=1; i<=num2;i++){
      	mul=mul+num1;
	  }

    cout << "The product is: " <<mul << endl;

    return 0;
}
