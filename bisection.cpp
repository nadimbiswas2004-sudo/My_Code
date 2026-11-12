#include<iostream>
#include<cmath>
using namespace std;

double F(double x){
return (1*pow(x,3)-3*pow(x,2)+0*x-7);
}
int main()
{
    int i;
    double a,b,m,h1,h2,root;
    cout<<"Enter 1st initial guess = ";
    cin>>a;

    cout<<"Enter 2nd initial guess = ";
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
            for(i=0;i<1000;i++){
            h1=(fabs(F(a))*fabs(b-a))/(fabs(F(a))+fabs(F(b)));
            a=a+h1;
            if(fabs(h2-h1)<0.0000001)
            {
                break;
            }
            h2=h1;

            }
            root = a;
        }

    }
    cout<<"Root = "<<root<<endl;

}
