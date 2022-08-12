#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
  public:
   void dfs(int node,vector<int>adj[],vector<int>&ls,int visited[])
   {
       visited[node]=1;
       ls.push_back(node);
       for(auto it:adj[node])
       {
           if(!visited[it])
           dfs(it,adj,ls,visited);
       }
   }
    vector<int> dfsOfGraph(int v, vector<int> adj[])
    {
       vector<int>ls;
       int start=0;
       int visited[v]={0};
       dfs(start,adj,ls,visited);
       return ls;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
