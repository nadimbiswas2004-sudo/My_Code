#include<iostream>
using namespace std;
int main()
{
	int a=3,*ptr;
	ptr=&a;
	cout<<"The value of a is:"<<*ptr<<endl;
	*ptr=*ptr*5+a;
	cout<<"The value of a is:"<<*ptr<<endl;
	return 0;
}