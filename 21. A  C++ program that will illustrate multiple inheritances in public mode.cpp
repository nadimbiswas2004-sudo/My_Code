#include<iostream>
#include<string>
using namespace std;
class university
{
public:
    string Name;

};
class cse
{
public:
    int Id;
};
class student:public university, public cse
{
public:
    void input()
    {
        cout<<"Enter The Name:";cin>>Name;
        cout<<"\nEnter The Id:";cin>>Id;
    }
    void output()
    {
        cout<<endl<<"-----------------------"<<endl;
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

