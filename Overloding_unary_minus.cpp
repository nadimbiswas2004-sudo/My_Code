#include<iostream>
using namespace std;
class space 
{
	int x,y,z;
	public:
		void getdata(int a, int b, int c);
		void putdata();
		void operator-();
};
void space::getdata(int a, int b, int c)
{
	x=a;
	y=b;
	z=c;
}
void space ::putdata()
{
	cout<<"X="<<x<<"\nY="<<y<<"\nZ="<<z<<"\n";
}
void space::operator-()
{
	x=-x;y=-y;z=-z;
}
int main()
{
	space s;
	s.getdata(4,5,6);
	cout<<"-S::\n";
	s.putdata();
	cout<<"-------------------------------\n";
	-s;
	cout<<"-S::\n";
	s.putdata();
	return 0;
}