#include<iostream>
using namespace std;
int main()
{
	int *ptr,num,arr[5]={4,7,5,9,3};
	ptr=arr;
	cout<<"Enter the number:";
	cin>>num;
	for(int i=0;i<5;i++)
	{
		if(*ptr==num)
		{
			cout<<endl<<""<<num<<" is present in this array.";
			break;
		}
		else 
		if (i==4)
		
			cout<<"\n"<<num<<" is not present in the array.";
			ptr++;
	}
	return 0;
	
}