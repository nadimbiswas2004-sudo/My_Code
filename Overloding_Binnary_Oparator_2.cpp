#include<iostream>
using namespace std;
class Number
{
	int a,b;
	public:
		Number() { a=0;b=0;    }
		Number(int real, int img)
		{
			a=real;b=img;
		}
		void display()
		{
	cout<<" "<<a<<"--"<<" "<<b<<"\n";
		}	
		Number operator- (Number);
        	
};
 Number Number::operator- (Number c)
{
	Number temp;
	temp.a=a-c.a;
	temp.b=b-c.b;
	return temp;
}

int main()
{
	Number m1,m2,m3;
	m1=Number(16,3);
	m2=Number(4,5);
	m3=m1-m2;
	cout<<"M1=";m1.display();
	cout<<"M2=";m2.display();
	cout<<"M3=";m3.display();
	return 0;
}