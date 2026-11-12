#include<iostream>
using namespace std;

int main()
{
	int i,j,size,num[size]={ };
	cin>>size;cout<<"\n";
for(j=0;j<size;j++)
{
	cin>>num[j];
		cout<<" "<<num[j];
}
  
 
  int i,j;
    for (i=0;i<10;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
 
	return 0;
}