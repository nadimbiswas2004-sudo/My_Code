#include<iostream>
using namespace std;
int main()
{
	int *a,b;
	a= new int [3];
	*a=876;
	cout<<""<<*a;
	delete a;
	return 0;
}