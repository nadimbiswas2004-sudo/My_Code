#include<iostream>
using namespace std;
class item
{
		protected:
			int a;
};
class nadim: protected item
{
	public:
	void getdata()
	{
		a=7;
		cout<<a;
	}
};
int main()
{
	nadim n;
	n.getdata();
	return 0;
}