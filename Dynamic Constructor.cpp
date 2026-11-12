#include<iostream>
#include<string>
using namespace std;
class Name
{
	private:
		int size,a;
		string *name;
		public:
			Name() {    };
			Name(string ch[], int b)
			{
				size=b;
				name=new string [size];
				for(int i=0;i<size;i++)
				{
					name[i]=ch[i];
				}
			}
			void putdata(void)
			{
				for(int i=0;i<size;i++)
				cout<<name[i];
				delete[] name;	
			}
			~Name() {    };
};
int main()
{
	string a[]={"Ahte Shamul Hoque Nadim Biswas"};
	int m=sizeof(a)/sizeof(a[0]);
	Name n;
	n=Name(a,m);
	n.putdata();
	return 0;
}