#include<iostream>
#include<string>
using namespace std;
class student
{
	public:
		string varsity, Program, Section;
};
class cse: private student
{
	public:
	string Name;int Id, Age;float CGPA;
	void putdata(){
		cout<<"Northern University of Business & Technology, Khulna"<<endl;
		cout<<"Program Name:CSE"<<endl;
		cout<<"Section Name:2C"<<endl;
	}
};
class studentcse:private cse
{
	public:
		void getdata()
		{
			cout<<"Enter the student Name:"<<endl;cin>>Name;
			cout<<"Enter the student Id:"<<endl;cin>>Id;
			cout<<"Enter the student CGPA:"<<endl;cin>>CGPA;
			cout<<"Enter the student Age:"<<endl;cin>>Age;
			cout<<"---------------------------";cout<<endl;
		}
		void display()
		{
			putdata();
			cout<<"Enter the student name:"<<Name<<endl;
			cout<<"Enter the student Id:"<<Id<<endl;
			cout<<"Enter the student CGPA:"<<CGPA<<endl;
			cout<<"Enter the student Age:"<<Age<<endl;
		}
};
int main()
{
	studentcse h;
	h.getdata();
	h.display();
	return 0;
}

