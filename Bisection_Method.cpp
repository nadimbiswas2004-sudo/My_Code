#include<iostream>
#include<cmath>
using namespace std;
double F(double x){
return (pow(x,3)-3*pow(x,2)+6*x-6);
}
int main()
{
    double a,b,m,root;
    cout<<"Inter first initial guess:  ";
    cin>>a;
     cout<<"Inter Second initial guess:  ";
    cin>>b;
    if(F(a)==0){
        root=a;
    }
    else if(F(b)==0){
        root=b;
    }
    else{
        if(F(a)*F(b)>0){
            cout<<"Initial guess is wrong.";
        }
        else{
            for(int i=0;i<100;i++){
                m=(a+b)/2;
                if(F(a)*F(m)>0){
                    a=m;
                }
                else{
                    b=m;
                }
                root=m;
            }
        }
    }
    cout<<"root="<<root;
}
