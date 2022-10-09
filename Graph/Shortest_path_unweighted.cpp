#include<bits/stdc++.h>
using namespace std;
vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){

    unordered_map<int,list<int>>adj;
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i].first;
        int v=edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
        
    }
    unordered_map<int,int>parent;
     unordered_map<int,bool>visit;
    queue<int>q;
    q.push(s);
    parent[s]=-1;
    visit[s]=1;
    while(q.size())
    {
       int f=q.front();
        q.pop();
        for(auto i:adj[f])
        {
            if(!visit[i])
            {
               visit[i]=1;
                parent[i]=f;
                q.push(i);
            }
        }
        
    }
    vector<int>v;
    int curr=t;
    v.push_back(t);
    while(curr!=s)
        
    {
        curr=parent[curr];
        v.push_back(curr);
    }
    
reverse(v.begin(),v.end());
    return v;
}
