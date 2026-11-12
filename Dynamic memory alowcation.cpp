#include<iostream>
using namespace std;
int main()
{
	int *a;
	float b=6;
	*a=5;
	cout<<"Initisil value: "<<*a;
	a=new int(b);
	cout<<endl<<"Dynamic value: "<<*a<<endl;
	delete[]a;
	a=new int[4];
	a[0]=2;
	a[1]=3;
	a[2]=4;
	a[3]=5;
	for(int i=0;i<4;i++){
			cout<<"a["<<i+1<<"]"<<"= "<<a[i]<<endl;
	}
	delete[] a;
	return 0;
}