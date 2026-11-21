#include<iostream>
using namespace std;
typedef void (*funcPtr)(int,int);
void add(int a,int b)
{
	int sum=a+b;
	cout<<"Sum of value:"<<sum<<endl;
}
void mul(int x, int y)
{
	int mul=x*y;
	cout<<"Multiplecation:"<<mul<<endl;
}
int main()
{
	funcPtr ptr;
	ptr=&add;
	ptr(4,5);
	ptr=&mul;
	ptr(7,8);
	return 0;
}