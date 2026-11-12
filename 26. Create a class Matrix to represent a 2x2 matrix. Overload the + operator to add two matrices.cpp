#include<iostream>
using namespace std;
class Matrix
{
	private:
		int i,j;
		int mat[2][2];
		public:
			Matrix() {    };
			Matrix(int a, int b, int c, int d)
			{
				mat[0][0]=a;
				mat[0][1]=b;
				mat[1][0]=c;
				mat[1][1]=d;	
			}
			void display(void);
		friend	Matrix operator+(Matrix n,Matrix m);
};
void Matrix:: display(void)
{
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<" "<<mat[i][j];
		}
		cout<<endl;
	}	
}
Matrix operator+(Matrix n, Matrix m)
{
	Matrix temp;
	for(n.i=0;n.i<2;n.i++){
		for(n.j=0;n.j<2;n.j++){
			temp.mat[n.i][n.j]=n.mat[n.i][n.j]+m.mat[n.i][n.j];
		}
	}	
	return temp;
}
int main()
{
	Matrix m1,m2,m3;
	m1=Matrix(4,3,6,7);
	m2=Matrix(3,9,6,9);
	m3=m1+m2;
	cout<<"Matrix1:"<<endl;
	m1.display();
	cout<<"\nMatrix1:"<<endl;
	m2.display();
	cout<<"\nAdding Matrix:"<<endl;
	m3.display();
	return 0;
}


