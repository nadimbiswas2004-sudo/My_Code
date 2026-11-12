#include<iostream>
using namespace std;
class Box
{
	private:
		float length,height,breadth;
		public:
			void getdata(float a, float b, float c)
			{
					length=a;
	                height=b;
	                breadth=c;
			}
			friend float putdata(Box &h){
				return (h.length*h.height*h.breadth);
			}
};
int main()
{
	Box s;
	s.getdata(5.6,4.1,3.2);
float volumn = putdata(s);
cout<<"Enter the Volumn:"<<volumn;
	return 0;
}
