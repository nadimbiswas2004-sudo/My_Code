#include<iostream>
using namespace std;
class space
{
	private:
		int x,y,z;
		public:
			space(int a,int b,int c)
			{
				x=a;y=b;z=c;
			}
			void display()
			{
				cout<<" X="<<x<<"\n Y="<<y<<"\n Z="<<z;
			}
			void operator-();
};
void space:: operator-()
{
	x=-x;
	y=-y;
	z=-z;
}
int main()
{
	space S(3,5,7);
	S.display();
	-S;
	cout<<"\n";
	S.display();
	return 0;
}