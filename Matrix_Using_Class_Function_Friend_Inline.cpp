#include<iostream>
using namespace std;
class Matrix
{
	int i,j,matrix1[2][2],matrix2[2][2];
	int matrix[2][2];
	public:

		inline void getdata()
		{
			cout<<"matrix1:\n";
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
				cin>>matrix1[i][j];
				}
			}
			cout<<"matrix2:\n";
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cin>>matrix2[i][j];
				}
			}
		}
   friend inline void putdata(Matrix &j);
};
void putdata(Matrix &j)
{
	for(j.i=0;j.i<2;j.i++)
	{
		for(j.j=0;j.j<2;j.j++)
		{
		     j.matrix[j.i][j.j]=j.matrix1[j.i][j.j]+j.matrix2[j.i][j.j];
		}
	}
	cout<<"\n ADD THE MATRIX:\n";
for(j.i=0;j.i<2;j.i++)
	{
		for(j.j=0;j.j<2;j.j++)
		{
			cout<<" "<<j.matrix[j.i][j.j];
		}
		cout<<"\n";
	}
}
int main()
{
	Matrix m;
	m.getdata();
	putdata(m);

	return 0;
}
