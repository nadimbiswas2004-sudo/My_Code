#include<iostream>
using namespace std;
class Box
{
private:
    float length, breaght, height;

public:
    float getdata(float a, float b, float c)
    {
        length=a;breaght=b;height=c;
        return 0;
    }
    
    friend float putdata(Box &h);

};
float putdata(Box &h)
{
    return h.length*h.breaght*h.height;

}
int main()
{
    Box s;
    s.getdata(5.7,6.8,4.5);
    float vloume=putdata(s);
    cout<<vloume;
    return 0;
}
