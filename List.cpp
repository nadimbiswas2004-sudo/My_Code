#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>li={1,2,3,4,5};
	list<int>li2={2,4,5,8,9};
	li.merge(li2);
	for(auto it:li)cout<<it<<", ";
	cout<<endl;
	return 0;
}