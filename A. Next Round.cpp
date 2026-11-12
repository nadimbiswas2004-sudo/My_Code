#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int target=arr[k-1];
     int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=target && arr[i]>0)
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}
