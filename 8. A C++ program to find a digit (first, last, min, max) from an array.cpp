#include<iostream>
using namespace std;
	void bubbleshort(int arr[],int n)
	{
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
					swap(arr[j+1],arr[j]);
				}
			}
		}	
		cout <<"Enter the Minimam number ="<<arr[0]<<endl;
          cout <<"Enter the Maximam number ="<<arr[n-1]<<endl;
	}
int main()
{
	int first,last;
	int arr[]={6,3,9,6,1,3,54,99,54,23};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
	 first=arr[0];
	 last=arr[n-1];
	}
		cout<<"Enter the first number"<<first<<endl;
		cout<<"Enter the last number"<<last<<endl;
		bubbleshort(arr,n);
	return 0;
}
