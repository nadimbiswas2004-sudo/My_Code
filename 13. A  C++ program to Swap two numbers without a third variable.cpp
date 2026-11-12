#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<endl<<"Enter the second number:";
	cin>>b;
		cout<<"Enter the number:"<<a<<","<<b<<endl;
		a=a+b;
		b=a-b;
		a=a-b;
		cout<<"Enter the Swap number:"<<a<<","<<b<<endl;
		return 0;
}