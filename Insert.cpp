#include<iostream>
using namespace std;
int main()
{
	int size=4;
	int arr[size]={1,2,3,4};
	//first position
	for(int i=size+1;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	int newnum=0;
	arr[0]=newnum;
	for(int i=0;i<size+1;i++)
	{
		cout<<arr[i]<<", ";
	}
	cout<<"\n-----------------\n";
	//any position
	for(int i=size+2;i>1;i--)
	{
		arr[i]=arr[i-1];
	}
	newnum=4;
	arr[2]=newnum;
	for(int i=0;i<size+2;i++)
	{
		cout<<arr[i]<<", ";
	}
	cout<<"\n-----------------\n";
	//Last position
		newnum=8;
	
	for(int i=size+3;i>size;i--)
	{
	arr[6]=newnum;
	}

	for(int i=0;i<size+3;i++)
	{
		cout<<arr[i]<<", ";
	}
	return 0;
}