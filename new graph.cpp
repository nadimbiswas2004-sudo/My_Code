#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>*a[6];
    for(int i=0;i<6;i++)
    {
        a[i]=new vector<int>();
    }
    /*a[0]->push_back(1);
    a[0]->push_back(2);
    a[1]->push_back(0);
    a[1]->push_back(3);
     a[1]->push_back(4);
     a[2]->push_back(0);
      a[2]->push_back(5);
       a[3]->push_back(1);
       a[4]->push_back(1);
       a[5]->push_back(2);*/
   int u,v;
      for(int i=0;i<6;i++)
      {
          cin>>u>>v;
          a[u]->push_back(v);
      }
      char labels[] = {'A','B','C','D','E','F'};
    for(int i=0;i<6;i++)
    {
        cout<<"a["<<labels[i]<<"]=  ";
        for(int x:*a[i])
        {
            cout<<labels[x]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
