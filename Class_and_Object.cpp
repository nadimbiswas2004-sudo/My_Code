#include<iostream>
#include<cstring>
using namespace std;
class student
{
private:
	char name[50];
	int id;
	int age;
	public:
		void getdata ()
		{cin>> name;
		 cin>> id>>age;
		}
	void putdata();
};
void student::putdata()
{cout<<"Name: "<<name<<"\n";
 cout<<"ID: "<<id<<"\n"<<"Age: "<<age<<"\n";
}
main()
{ 
 student x;
 x.getdata();
 x. putdata();
 return 0;
}
