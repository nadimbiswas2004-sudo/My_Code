#include<iostream>
using namespace std;
int main()
{
	int *a,*b,c=4,d=6;
	a=&c;
	b=&d;
	cout<<"After swaping:  "<<*a<<", "<<*b<<endl;
	*a=c+d;
	*b=*a-*b;
	*a=*a-*b;
	cout<<"Befor swaping:  "<<*a<<", "<<*b<<endl;
	return 0;
}