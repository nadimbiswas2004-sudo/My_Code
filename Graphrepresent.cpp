#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>adj[N];
int visited[N];
void bfs(int source)
{
    queue<int>q;
    q.push(source);
    visited[source];
    while(q.empty()==0){
        int s;
        s=q.front();
        q.pop();
        cout<<s<<endl;
        for(auto child:adj[s]){
            if(visited[child]==1){
                continue;
            }else
            {
                q.push(child);
                visited[child]=1;
            }
        }
    }
}
int main()
{
    cout<<"Input of n:";
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        int u,v;
        cout<<"\nInput of u,v:";
        cin>>u>>v;
        adj[u].push_back(v);
         adj[v].push_back(u);
    }
    int source;
    cout<<"\nInput of source:"<<endl;
    cin>>source;
    bfs(source);
    cout<<endl;
    return 0;
}
