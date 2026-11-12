#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k, n;
    float val;
    cout<<"Enter the number of points:";
    cin>>n;
    float x[n],y[n];
    cout<<endl<<"Enter points:";
    for(int i=0;i<n;i++)
    {
        cout<<endl<<"Enter the"<<i+1<<" value:";
        cin>>x[i]>>y[i];
    }
    cout<<"Enter the value:"<<endl;
    cin>>val;
    float de=1, nu=1, out=0;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n;k++)
        {
            if(i!=k)
            {
                nu=nu*(val-x[k]);
               de=de*(x[i]-x[k]);
            }
        }
        out=out+(nu*y[i]/de);
        cout<<endl<<"Output::"<<out<<endl;
        nu=1;
        de=1;
    }
cout<<endl<<"Value of Y=="<<out<<endl;
}
