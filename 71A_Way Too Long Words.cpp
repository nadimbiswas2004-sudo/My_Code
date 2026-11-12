/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string N[100];
    for(int i=0;i<n;i++){
        cin>>N[i];
    }
    for(int i=0;i<n;i++){
       if((N[i]).length()<<10){
        cout<<N[i]<<endl;
       }else{
       cout<<
       }

    }


    return 0;
}*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>N(n);
    for(int i=0;i<n;i++){
        cin>>N[i];
    }
    for(int i=0;i<n;i++){
       if(N[i].size()<=10){
         cout<<N[i]<<endl;
       }else{
       cout<<N[i].front()<<N[i].size()-2<<N[i].back()<<endl;
       }
    }
    return 0;
}

