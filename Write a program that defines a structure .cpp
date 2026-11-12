#include<iostream>
#include<string>
using namespace std;
struct Person
{
	string name;
	int age;
};
int main()
{
	Person *str=new Person;
	cout<<"Enter the Name:";
		cin>>str->name;
		cout<<"\nEnter the Age:";
		cin>>str->age;
		cout<<endl<<"Person Name: "<<str->name;
		cout<<endl<<"Person Age: "<<str->age<<endl;
		return 0;
}