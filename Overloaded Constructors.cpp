#include<iostream>
using namespace std;
class item
{
	private:
		int x;
		int y;
		public:
			item(){   };
			item(int a);
			item(int c,int d);
			friend item getdata(item &i, item &j);
			friend void display(item k);
};
item::item(int a)
{
	x=y=a;
}
item::item(int c, int d)
{
	x=c;y=d;
}
item getdata(item &i, item &j)
{
	item l;
	l.x=i.x+j.x;
	l.y=i.y+j.y;
	return l;
}
void display(item k)
{
	cout<<" "<<k.x<<"+ "<<k.y<<endl;
}
int main()
{
	item it1(3),it2(5,6),it3;
	it3=getdata(it1,it2);
	cout<<"it1=";display(it1);
	cout<<"it2=";display(it2);
	cout<<"it3=";display(it3);
	return 0;
}
