//#include<iostream>
//#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n!=0)
    {
        return n*fact(n-1);
    }
    else{
        return 1;
    }
}
int main()
{

    int n,i,p,r,ftr,cnt=0,sum;
    float u,val,h;
    cout<<"Enter number of points:";
    cin>>n;
    sum=n*(n+1)/2;
    float x[n];
    float y[sum];
    r=n;
    for(i=0;i<n;i++)
    {
        p=i+1;
        cout<<endl<<"Enter no.Point:"<<p;
        cin>>x[i]>>y[i];
    }
    cout<<endl<<"Enter x:";
        cin>>val;
        h=x[1]-x[0];
        u=(val-x[0])/h;
        int j=0;
        for(i=0,j=0;i<sum;i++,j++)
        {

            if(cnt==r-1)
            {
                i=i+1;
                r=r-1;
                cnt=0;
            }
            y[n+j]=y[i+1]-y[i];
            cnt++;
        }
        cout<<endl;
        for(i=0;i<sum;i++)
        {
            cout<<y[i];
        }
        int m=n;
        float out=y[0];
        float us=u;
        for(i=1;i<n;i++)
        {
            ftr=fact(i);
            out=out+(y[m]*us/ftr);
            m=m+n-i;
            us=us*(u-i);
        }
        cout<<endl<<"Output="<<fixed<<setprecision(9)<<out<<endl;
}
