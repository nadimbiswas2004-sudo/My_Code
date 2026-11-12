#include<iostream>
using namespace std;
class item
{
	private:
		int x,y;
		public:
	    item (int a, int b)
		{
			x=a;
			y=b;
		}
		void display(void)
		{
			cout<<"A="<<x<<"\n"<<"B="<<y<<" \n";
		}
};
		main()
		{
			item p(2,5);
			p.display();
			return 0;
		}