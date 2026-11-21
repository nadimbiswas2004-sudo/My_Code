#include<iostream>
using namespace std;
int main()
{
	int num[]={88,66,44,22,99,55};
	int *ptr;
	ptr=num;
	cout<<"The number of Array:"<<endl;
	for(int i=0;i<6;i++)
	cout<<num[i]<<endl;
	cout<<"The number of num[1]:"<<*ptr<<endl;
	ptr++;
	cout<<"The number of num[2]:"<<*ptr<<endl;
	ptr++;
	cout<<"The number of num[3]:"<<*ptr<<endl;
	ptr++;
	cout<<"The number of num[4]:"<<*ptr<<endl;
	ptr++;
	cout<<"The number of num[5]:"<<*ptr<<endl;
	ptr++;
	cout<<"The number of num[6]:"<<*ptr<<endl;
	ptr--;
	cout<<"The number of num[5]:"<<*ptr<<endl;
	return 0;

}