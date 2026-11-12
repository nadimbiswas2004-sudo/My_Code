#include<iostream>
using namespace std;
class Sum
{
	int i,j,matrix1[3][3],matrix2[3][3];
	int matrix[3][3];
	public:
		void getdata();
		void putdata();
};
void Sum::getdata()
{
	cout<<"\nMatrix1[3][3]=\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>matrix1[i][j];
		}
	}
	cout<<"\nMatrix2[3][3]=\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>matrix2[i][j];
		}
	}
}
void Sum::putdata()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			matrix[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
	cout<<"\nSum of Matrix::::\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<" "<<matrix[i][j];
		}
		cout<<"\n";
	}
	
}
int main()
{
	Sum S;
	S.getdata();
	S.putdata();
	return 0;
}
