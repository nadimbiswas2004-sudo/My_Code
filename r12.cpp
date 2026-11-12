#include<iostream>
using namespace std;
class item{
	private:
		int b;
		static int co;
		public:
			void getdata(int a){
				b=a;
				cout<<"A="<<b<<endl;
				co++;
				cout<<co;
		}
			
};
int item::co;
int main()
{
	item m;
	m.getdata(100);
	m.getdata(200);
	//m.putdata();
	return 0;
}