#include<iostream>
using namespace std;
int main()
{
	int arr[]={9,6,7,4,2,3,1,5,8,10};
	int N=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<N-1;i++){
		int smallest_index=i;
		for(int j=i+1;j<N;j++)
		if(arr[smallest_index]>arr[j]){
			smallest_index=j;
		}
		swap(arr[i],arr[smallest_index]);
	}
	
	for(int i=0;i<N;i++){
		cout<<arr[i]<<", ";
	}
	//----------------
	cout<<endl<<"----------------"<<endl;
	for(int i=1;i<N;i++){
		int curr=arr[i];
		int prev=i-1;
		while(prev>=0&&arr[prev]>curr){
			arr[prev+1]=arr[prev];
			prev--;
		}
		arr[prev+1]=curr;
	}
	
	for(int i=0;i<N;i++){
		cout<<arr[i]<<", ";
	}
	
	return 0;
}