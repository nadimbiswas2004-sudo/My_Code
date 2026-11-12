#include<iostream>
#include<vector>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cout<<"How many data point? ::"<<endl;
	cin>>n;
	if(n<2)
	{
	cout<<"Error: At least 2 data points are needed."<<endl;
	return 0;
	}
	
	vector<double>x(n), y(n);
	for(int i=0;i<n;i++)
	{
		cout<<"Enter X("<<i+1<<"):"<<endl;
		cin>>x[i];
		cout<<"Enter Y("<<i+1<<"):"<<endl;
		cin>>y[i];
	}
	
	double sum_x=0, sum_x2=0, sum_y=0, sum_y2=0, sum_xy=0;
	
	for(int i=0;i<n;i++)
	{
		sum_x +=x[i];
		sum_x2 += pow(x[i],2);
		sum_y +=y[i];
        sum_y2 += pow(y[i],2);
		sum_xy +=x[i]*y[i];
	}
	
	double numerator=(n*sum_xy - sum_x*sum_y);
	double denominator= sqrt((n*sum_x2 - pow(sum_x,2))*(n*sum_y2-pow(sum_y,2)));

    if(denominator==0)
    {
        cout<<"Error: Division by zero, correlation undefined."<<endl;
    }
    double r = numerator/denominator;
	
	cout << fixed << setprecision(4);

	cout<<endl<<"Correlation coefficient, R= "<<r;
	return 0;
	
	
	
}
