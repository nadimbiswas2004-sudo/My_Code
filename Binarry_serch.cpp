#include<iostream>
using namespace std;
int main()
{
	int arr[]={4,2,6,8,5,9,16,14,19};
	int N=sizeof(arr)/sizeof(arr[0]);
	int num=16;
	int mid,min=0,max=N-1;
	while(arr[mid==num]){
		mid=min+(max-min)/2;
		if(arr[mid]==num){
			cout<<mid+1;
			break;
		}
		else if(arr[mid]<num){
			min=mid+1;
		}
		else{
			max=mid-1;
		}
	}
	return 0;
}