#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6,7,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	int num=8;
	for(int i=0;i<n;i++)
	
		if(arr[i]==num)
		{
			cout<<i+1;
		}
		return 0;
}