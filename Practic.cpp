#include<iostream>
using namespace std;
int binary(int arr[],int low,int high,int x)
{
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(arr[mid]==x);
			return mid;
			if(arr[mid]<x)
			low=mid+1;
			else
			high=mid-1;
	}
	return -1;
}
int main()
{
	int arr[]={4,6,9,3,1,2};
	int x=9;
	int n=sizeof(arr)/sizeof(arr[0]);
	int result=binary(arr,0,n-1,x);
	(result==-1)?cout<<"wrong":cout<<"Rught:"<<result<<endl;
	return 0;
}