#include<iostream>
using namespace std;
class item
{
	int num;
	static int count;
	public:
		void getdata(int a)
		{
			num=a;
			count++;
		}
			static void putdata(void)
		{
			cout<<"Enter the count:"<<count<<endl;
		}
};
int item::count;
int main()
{
	item t1,t2,t3;
	t1.getdata(100);
	t2.getdata(200);
	t3.getdata(300);
	t1.putdata();
	t2.putdata();
	t3.putdata();
	return 0;   
}