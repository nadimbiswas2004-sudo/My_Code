#include<iostream>
using namespace std;
int main()
{
	int matrix[3][2];
	cin>>matrix[3][2];

	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"  "<<matrix[i][j];
		}
		cout<<"\n";
	}
}
