#include<iostream>
using namespace std;
class person
{
	char name[50];
	int age;
	public:
		void getdata(void);
		void display(void);
};
void person::getdata(void)
{
	cout<<"Enter name";
	cin>>name;
	cout<<"Enter age";
	cin>>age;
}
void person::display()
{
	cout<<"\n Name:"<<name;
	cout<<"\n Age:"<<age;
}
int main()
{
	person a;
	a.getdata();
	a.display();
}
