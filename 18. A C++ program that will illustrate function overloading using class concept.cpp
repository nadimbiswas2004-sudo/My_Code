#include<iostream>
using namespace std;
class mul
{
	private:
		int x,y,z;
		public:
			mul(){  };
	mul(int a,int b, int c)
	{
	x=a;y=b;z=c;
	}
	void display(void)
	{
			int m=x*y*z;
			cout<<""<<m<<endl;
	}
	~mul(){
	}
	void add(int d,int e, int f);
};
void mul::add(int d,int e, int f)
{
	x=d;y=e;z=f;
	cout<< x+y+z<<endl;	
}
int main()
{
	mul m1,m2,m3;
	cout<<"---------- Multiplecation----------"<<endl;
	m1=mul(3,4,5);m1.display();
	m2=mul(8,6,4);m2.display();
	m3=mul(4,5,6);m3.display();
	cout<<"---------- Add----------"<<endl;
	m1.add(3,4,5);
	m2.add(8,6,4);
	m3.add(4,5,6);
	return 0;
}




