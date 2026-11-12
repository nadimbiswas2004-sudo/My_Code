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
	
	double sum_x=0, sum_x2=0, sum_y=0, sum_xy=0;
	
	for(int i=0;i<n;i++)
	{
		sum_x +=x[i];
		sum_x2 += pow(x[i],2);
		sum_y +=y[i];
		sum_xy +=x[i]*y[i];
	}
	
	double b=(n*sum_xy - sum_x*sum_y)/(n*sum_x2 - pow(sum_x,2));
	double a = (sum_y/n)-b*(sum_x/n);
	
	cout << fixed << setprecision(4);

	cout<<endl<<"Regression Equation: "<<endl;
	cout<<"Y= "<<a <<"+" <<b<<"X"<<endl;
	
	double x_predict;
	
	cout<<"\n Enter xvalue to predict X: ";
	cin >>x_predict;
	
	double y_predict = a+ b *x_predict;
	cout<<"Predicted y= "<<y_predict<<endl;
	
	return 0;
	
	
	
}
