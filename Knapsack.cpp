#include<iostream>
#include<bits/stdc++.h>
using mnamespace std;
bool computere(vector<int> &a, vector<int>&b)
{

    double r1((double)a[0]/a[1]);
    double r2((double)b[0]/b[1]);
    return r1>r2;
}
double knap_sack(vector<int>&profit, vector<int>weight, int capacity)
{
    int s;
    s=profit.size();
    vector<vector<int>>itmes(s.vector<int>(2));
    for(int i=0;i<=s;i++)
    {
        itmes[i][0]=profit[i];
        itmes[i][1]=weight[i];

    }
    sort(items.begin(),items.end(), compare);
    double total=0.0;
    for(int i=0;i<=s-1;i++)
    {
        if(items[i][1]<=capacity)
        {
            total=total+items[i][0];
            capacity=items[i][1];
        }
        else
        {
             total=total+items[i][0];
            capacity=items[i][1];
        }
    }
}
