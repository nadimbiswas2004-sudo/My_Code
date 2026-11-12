#include<iostream>
using namespace std;
class space
{
	private:
		float x,y,z;
		public:
			space(){    };
			space(int a,int b,int c);
			void putdata(void);
	friend	space operator/(const space &a,const space &b);
};
space::space(int a,int b,int c)
{
	x=a;y=b;z=c;
}
void space::putdata()
{
	cout<<"X="<<x<<endl<<"Y="<<y<<endl<<"Z="<<z<<endl;
}
space operator/(const space &a,const space &b)
{
	space s;
	 s.x=a.x/b.x;
	 s.y=a.y/b.y;
	 s.z=a.z/b.z;
	return s;
}
int main()
{
	space s1,s2,s3;
	s1=space(3,4,5);
	s2=space(8,7,6);
	s3=s1/s2;
	s1.putdata();
	s2.putdata();
	s3.putdata();
	return 0;
}
