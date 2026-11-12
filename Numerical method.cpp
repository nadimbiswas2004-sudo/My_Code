#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

double F(double x){
return (10-pow(x,2));
}
int main()

{
    int i;
    double a,b,m,root;
    cout<<"Enter 1st initial guess";
    cin>>a;

    cout<<"Enter 2nd initial guess";
    cin>>b;
    if(F(a)==0)
    {
        root = a;
    }
    else if(F(b)==0)
    {
        root = b;
    }
    else
    {
        if(F(a)*F(b)>0)
        {
            cout<<"Initial guess is wrong";
        }
        else{
            for(i=0;i<100;i++){
                m = (a+b)/2;
                if(F(a)*F(m)>0){
                    a = m;
                }else{
                b = m;
                }
            }
            root = m;
        }

    }
    cout<<"Root = "<<root<<endl;

}
