#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
     string a;
    cin>>n;
    while(1<=n<=150&&n--){
        cin>>a;
         if(a=="++x"){
            ++x;
       // if(a[1]=='+'){
            //++x;
        }else{
        --x;
        }
    }
    cout<<x;
    return 0;
}
