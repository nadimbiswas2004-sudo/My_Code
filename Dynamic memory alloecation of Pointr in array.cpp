#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number:";cin>>num;
	int *ptr=new int[num];
	for(int i=0;i<num;i++)
	ptr[i]=i+1;
	cout<<endl<<"Enter the array:";
	for(int i=0;i<num;i++)
	cout<<" "<<ptr[i];
	return 0;
}