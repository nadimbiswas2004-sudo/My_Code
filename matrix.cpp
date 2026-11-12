#include<iostream>
using namespace std;
int main()
{
	int matrix1[3][4]={},matrix2[3][4]={};
	int i,j;
	cout<<"Matrix1=";
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>matrix1[i][j];
		}
	}
	cout<<"\nMatrix2=";
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>matrix2[i][j];
		}
	}
	
	int sum[3][4];
	cout<<"Sum[3][4]\n";
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			sum[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<" "<<sum[i][j];
		}
		cout<<"\n";
	}
}