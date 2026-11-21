#include<iostream>
using namespace std;
int main()
{
	int a, *pointer1, **pointer2;
	a=4;
	pointer1=&a;
	cout<<"The value of a: "<<*pointer1<<endl;
	*pointer1=5;
	cout<<"The value of pointer1: "<<*pointer1<<endl;
	pointer2=&pointer1;
	cout<<"The modified value of pointer1:"<<**pointer2<<endl;
	return 0;
}