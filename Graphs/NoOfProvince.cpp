//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// tc 0(v)+O(v+e)

class Solution {
  public:
  void dfs(int node,vector<int>adls[],int vis[])
  {
      vis[node]=1;
      for(auto it:adls[node])
      {
          if(!vis[it])
          dfs(it,adls,vis);
      }
  }
    int numProvinces(vector<vector<int>> adj, int v) 
    {
        vector<int>adls[v];
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                if(adj[i][j]==1 && i!=j)
                {
                    adls[i].push_back(j);
                    adls[j].push_back(i);
                }
            }
        }
      int c=0;
      int vis[v]={0};
      for(int i=0;i<v;i++)
      {
         if(!vis[i])
         {
             c++;
             dfs(i,adls,vis);
         }
      }
      return c;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends
