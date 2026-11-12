#include<iostream>
#include<string>
using namespace std;
class Person
{
	public:
		string Name;
		int Age;
};
class Student:public Person
{
	private:
		int Id;
		float Marks;
	public:
		void input(void);
		void display(void);		
};
void Student::input()
{
	cout<<"Enter The Students Name:";
	cin>>Name;
	cout<<endl<<"Enter The Students Age:";
	cin>>Age;
	cout<<endl<<"Enter The Students Roll Number:";
	cin>>Id;
	cout<<endl<<"Enter The Students Marks:";
	cin>>Marks;
}
void Student::display()
{
	cout<<"Name:"<<Name<<endl;
	cout<<"Age:"<<Age<<endl;
	cout<<"Roll Number:"<<Id<<endl;
	cout<<"Marks:"<<Marks<<endl;
}
int main()
{
	Student s1;
	s1.input();
	s1.display();
	return 0;
}