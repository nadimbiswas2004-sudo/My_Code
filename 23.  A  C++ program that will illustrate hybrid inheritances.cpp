#include<iostream>
using namespace std;
class A
{
	public:
		int Age;
		string Name;
};
class B:private A
{
	public:
		void input1()
		{
			cout<<"B Name:";cin>>Name;
			cout<<endl<<"B Age:";cin>>Age;	
		}
		void output1()
		{
			cout<<endl<<"B Name:"<<Name<<endl;
			cout<<"B Age:"<<Age<<endl;	
		}	
};
class C:private A
{
	public:
		void input2()
		{
			cout<<"C Name:";cin>>Name;
			cout<<endl<<"C Age:";cin>>Age;	
		}
		void output2()
		{
			cout<<endl<<"C Name:"<<Name<<endl;
			cout<<"C Age:"<<Age<<endl;	
		}	
};
class D:private B, private C
{
	public:
	void input()
	{
		input1();
		input2();
	}
	void output()
	{
		output1();
		output2();
	}
};
int main()
{
	D j;
	j.input();
	j.output();
	return 0;
}