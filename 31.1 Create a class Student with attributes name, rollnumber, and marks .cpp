#include<iostream>
#include<string>
using namespace std;
class Student
{
	private:
		string name[5];
		int rollnumber[2];
		protected:
			float marks;
		public:
			void input();
			void display();	
};
void Student::input()
{
	
	cout<<"Enter the Name:";
		for(int i=0;i<5;i++)
		{
		cin>>name[i];	
		}
	cout<<endl<<"Enter the Roll Number:";
	for(int i=0;i<2;i++)
		{
		cin>>rollnumber[i];	
		}
	cout<<endl<<"Enter the Marks:";cin>>marks;
	cout<<endl<<"----------------------------"<<endl;
}
void Student::display()
{
	cout<<"Enter the Name:";
		for(int i=0;i<5;i++)
		{
		cout<<" "<<name[i];
		}
	cout<<endl<<"Enter the Roll Number:";
	for(int i=0;i<2;i++)
		{
		cout<<rollnumber[i];
		}
	cout<<endl<<"Enter the Marks:"<<marks<<endl;
	cout<<endl<<"----------------------------"<<endl;	
}

int main()
{
	int size;
	cout<<"Enter the Student number:";cin>>size;
	cout<<endl;
	Student *arr=new Student[size];
	for(int i=0;i<size;i++)
	{
		arr[i].input();
	}
	cout<<endl<<"-----------Output------------"<<endl;
	for(int i=0;i<size;i++)
	{
		arr[i].display();
	}
	delete [] arr;
	return 0;
}