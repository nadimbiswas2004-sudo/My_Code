#include<iostream>
#include<string>
using namespace std;
class A
{
	private:
		string name;
		int age,year;
		public:
			A() {   };
			A(string a,int b,int c);
			void putdata(void);
};
A::A(string a,int b,int c)
{
	name=a;
	age=b;
	year=c;
}
void A::putdata(void)
{
	cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Year: "<<year<<endl;
}
int main()
{
	string name;
		int age,year;
	A z;
	cout<<"Name: ";
	cin>>name;
	cout<<endl<<"Age: ";
	cin>>age;
	cout<<endl<<"Year: ";
	cin>>year;
	cout<<endl<<"_________________________"<<endl;
	z=A(name,age,year);
	z.putdata();
	return 0;
}