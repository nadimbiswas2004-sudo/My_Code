#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+10;
//long long dp[N];
long long fib(long long n)
{

    if(n<=1)
       {
           return n;
       }
      /* else if(dp[n]!=-1)
       {
           return dp[n];
       }*/
       else{
           //dp[n]= fib(n-1)+fib(n-2);
        return fib(n-1)+fib(n-2);
       //return dp[n];
       }
}
int main(){
//memset(dp,-1,sizeof(dp));
long long n;
    cin >>n;
    cout<<fib(n)<<endl;
   return 0;
}
