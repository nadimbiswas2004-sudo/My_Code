#include<iostream>
#include<vector>
using namespace std;
 vector<int>a[6];
 bool visited[6]={0};
 char labels[] = {'A','B','C','D','E','F'};
 void dfs(int source)
 {
     visited[source]=true;
     cout << labels[source] << " ";
     for(int next:a[source])
     {
         if (!visited[next])
         {
            dfs(next);
         }
     }
 }
int main()
{
   int u,v;
      for(int i=0;i<6;i++)
      {
          cin>>u>>v;
          a[u].push_back(v);
         // a[v].push_back(u);
      }

      dfs(0);
      /*for(int i=0;i<6;i++)
      {
          for(int x:a[i])
        {
            cout<<labels[x]<<"  ";
        }
      }
    for(int i=0;i<6;i++)
    {
        cout<<"a["<<labels[i]<<"]=  ";
        for(int x:a[i])
        {
            cout<<labels[x]<<"  ";
        }
        cout<<endl;
    }*/
    return 0;
}

