#include<iostream>
using namespace std;
class Shape
{
		public:
			float a,b,c;
};
class Circle:public Shape
{
	public:
		float area1(float radius)
			{
				c=radius;float pi=3.1416;
				return pi*radius*radius;
			}	
};
class Rectangle:public Shape
{
	public:
	float area2(float langth, float hight)
			{
				a=langth;b=hight;
				return a*b;
			}	
};		
int main()
{
	Circle c;
	Rectangle r;
	cout<<"The area of rectangular:";cout<<c.area1(2.2);
	cout<<"\nThe area of circle:";cout<<r.area2(4.5,2.3);
	return 0;
}
