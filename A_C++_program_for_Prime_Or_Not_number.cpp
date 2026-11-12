#include<iostream>
using namespace std;
int prime (int num)
{
	if(num<2)
	{
		return 0;
	}
	else
	{
		for(int i=2;i<num;i++)
		{
		if(num%i==0)
		{
		return 0;	
		}
		return 1;	
		}
	}
	return 0;
}
int main()
{
	int num;
	while(1) 
	{
	cout<<"Enter the number:";cin>>num;
	if(1==prime(num))
	{
		cout<<"This Number Is Prime.";
	}
	else{
		cout<<"This Number Is Not Prime.";
	}
	cout<<"\n";
	}
}