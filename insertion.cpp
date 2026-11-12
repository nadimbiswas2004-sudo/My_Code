#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,n;
    cout<<"enter size of array: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    n--;
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
}
