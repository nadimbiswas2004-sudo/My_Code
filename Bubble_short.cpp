#include<iostream>
using namespace std;
int main()
{
	int arr[]={9,6,7,4,2,3,1,5,8,10};
	int N=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<N;i++){
		for(int j=0;j<N-1-i;j++)
		if(arr[j]>arr[j+1]){
			swap(arr[j+1],arr[j]);
		}
	}
	for(int i=0;i<N;i++){
		cout<<arr[i]<<", ";
	}
	return 0;
}