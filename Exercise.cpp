#include<iostream>
using namespace std;
class space
{
	private:
		int x,y,z;
		public:
			space(int a,int b,int c);
			void putdata(void);
		void operator-();
};
space::space(int a,int b,int c)
{
	x=a;y=b;z=c;
}
void space::putdata()
{
	cout<<"X="<<x<<endl<<"Y="<<y<<endl<<"Z="<<z<<endl;
}
void space::operator-()
{
	x=-x;
	y=-y;
	z=-z;
}
int main()
{
	space s(3,4,5);
	s.putdata();
	-s;
	s.putdata();
	return 0;
}
