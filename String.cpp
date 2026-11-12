#include<iostream>
#include<string>
using namespace std;
int main()
{
	string b,a[5];
	
		for(int i=0;i<5;i++)
		{
			cin>>b;
			a[i]=b;
		}
		for(int i=0;i<5;i++)
		{
			cout<<" "<<a[i];
		}
		

	
	return 0;
}