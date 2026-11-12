#include<iostream>
#include<string>
using namespace std;
class university
{
public:
	void display()
	{
		cout<<"Nourthern Universitey Of Business & Technology, Khulna"<<endl;
    }
    string Name;
};
class cse
{
public:
    int Id;
};
class student:private university, private cse
{
private:

public:
    void input()
    {
        cout<<"Enter The Name:";cin>>Name;
        cout<<"\nEnter The Id:";cin>>Id;
    }
    
    void output()
    {
    	cout<<endl<<endl;
    	display();
        cout<<"Student Name:"<<Name<<endl;
        cout<<"Student Id:"<<Id<<endl;
    }
};
int main()
{
    student s;
    s.input();
    s.output();
    return 0;
}
