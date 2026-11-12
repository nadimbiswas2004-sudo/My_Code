#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long k;
    cin>>n;
   while(n--)
   {
       cin>>k;
       if(k%2==0){
       while(k%2==0 && k>0)
       {
               k=k/2;
       }
      if((k+1) ==2)
       {
           cout<<"YES"<<endl;
       }else
       {
       cout<<"NO"<<endl;
       }
       }
       else{
        cout<<"NO"<<endl;
       }
   }
    return 0;
}
