
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
double F(double x)
{

    return (pow(x,3)-4*pow(x,2));//+3*pow(x,1)-5);
}
double F_d(double x)
{
    return (3*pow(x,2)-8*x);
}

int main()
{
    double x1,x0,x2=100000, root;
    int cont=0;
    cout<<"Enter the first approx. of the root:";
    cin>>x0;

    if(F(x0)==0)
    {
        root=x0;
    }
    else{
            for(int i=0;i<100;i++)
            {
                x1=x0-F(x0)/F_d(x0);
                x0=x1;
                if(fabs(x2-x0)<0.00000001)
                {
                    break;
                }
                x2=x0;
                cont++;
            }
            root=x0;
    }
    cout<<endl<<"root=  "<<root;
    cout<<endl<<"Count=  "<<cont;
}

