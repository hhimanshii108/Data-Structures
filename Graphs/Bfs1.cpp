// For unweighted and undirected graph 
// SC- O(n)+O(m)
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
vector<int>bfsGraph(int n,vector<int>adj[])
{
    int visited[n+1]={0};
    visited[1]=1;
    queue<int>q;
    q.push(1);
    vector<int>bfs;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it:adj[node])
        {
            if(!visited[it])
            {
                visited[it]=1;
                q.push(it);
            }
        }
    }

    for(auto it:bfs)
        cout<<it<<" ";
    return bfs;
}
};
int main()
{
    int n,m;
    cin>>n>>m;
     vector<int>adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<m;i++)
    {
        cout<<i<<"->";
        for(auto it: adj[i])
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    Solution obj;
  obj.bfsGraph(n,adj);
    return 0;
}
