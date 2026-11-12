#include<iostream>
using namespace std;
int main()
{
	int size=3;
	int arr[size]={1,2,4,5};
	size++;
	for(int i=size;i>1;i--){
		arr[i]=arr[i-1];
	}
	int newnum=3;
	arr[2]=newnum;
	for(int i=0;i<=4;i++){
		cout<<arr[i]<<", ";
	}
	return 0;
}