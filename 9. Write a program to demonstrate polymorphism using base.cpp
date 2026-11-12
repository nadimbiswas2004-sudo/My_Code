#include<iostream>
using namespace std;
class box
{
	public:
	virtual	void getdata(int a, int b)
		{
			cout<<"Multiplacation :"<<a*b<<endl;
		}
};
class item: public box
{
	public:
	void getdata(int a, int b)
		{
			cout<<"SUM :"<<a+b<<endl;
		}
};
int main()
{
	box b;
	item i;
	box *a;
	a=&b;
	a->getdata(3,4);
	cout<<"-----------------------"<<endl;
	a=&i;
	a->getdata(6,4);
	return 0;
}