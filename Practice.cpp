#include<iostream>
using namespace std;
class Box{
int lenght,breadth,height;

public:
     void getdata(int a,int b,int c){
     lenght=a;
     height=b;
     breadth=c;
     }
     friend int display(Box & b)
     {
         return b.lenght*b.height*b.breadth;
     }
};
int main ()
{
    Box obj;
    obj.getdata(3,6,8);
    int prnt=display(obj);
    cout<<prnt;
    return 0;
}

