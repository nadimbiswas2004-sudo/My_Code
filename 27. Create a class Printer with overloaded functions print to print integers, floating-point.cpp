#include<iostream>
#include<string>
using namespace std;
class Printer
{
	public:
		void Print(int value, int num=1)
		{
			for(int i=0;i<num;++i)
			{
				cout<<"  "<<value;
			}
			cout<<endl;
		}
		void Print(double value, int num=1)
		{
			for(int i=0;i<num;++i)
			{
				cout<<"  "<<value;
			}
			cout<<endl;
		}
		void Print(const string value, int num=1)
		{
			for(int i=0;i<num;++i)
			{
				cout<<"  "<<value;
			}
			cout<<endl;
		}
};
int main()
{
		Printer p1,p2;
		p1.Print(8);
		p1.Print(5.7,2);
		p1.Print("nadim");
		p2.Print(64,4);
		p2.Print(77.8,3);
		p2.Print("Ahte Shamul Hoque Nadim Biswas",2);	
}