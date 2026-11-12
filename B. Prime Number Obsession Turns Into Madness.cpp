#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long k,m;
    cin>>k;
    while(k--)
    {
            cin>>m;
      unsigned long long  l=pow(2,m);
   unsigned long long n=pow(2,l)+1;
   cout<<n<<endl;
   unsigned long long o=2;
    if(n%o==0)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }




    return 0;
}
