#include<iostream>
using namespace std;
int main()
{
	int N;
	cout<<"Enter the Size:";
	cin>>N;
	int arr[N]={};
	cout<<endl<<"Enter the Number:"<<endl;
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	cout<<endl;
	for(int i=0;i<N;i++){
		cout<<arr[i]<<", ";
	}
	cout<<endl;
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