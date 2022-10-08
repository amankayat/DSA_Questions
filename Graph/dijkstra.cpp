#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    unordered_map<int,list<pair<int,int>>>adj;
    for(int i=0;i<edges;i++)
    {
       int u=vec[i][0];
       int v=vec[i][1];
        int w=vec[i][2];
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    vector<int>v(vertices);
    for(int i=0;i<vertices;i++)
        v[i]=INT_MAX;
    v[source]=0;
    set<pair<int,int>>s;
    s.insert(make_pair(0,source));
    while(s.size()!=0)
    {
     auto p1=*(s.begin());
        int d=p1.first;
        int n=p1.second;
        s.erase(p1);
        for(auto it:adj[n])
        {
           if(it.second+d<v[it.first]) 
           {
               auto rec=s.find(make_pair(it.second+d,it.first));
               if(rec!=s.end())
               {
                   s.erase(rec);
               }
               v[it.first]=it.second+d;
               s.insert(make_pair(it.second+d,it.first));
           }
        }
        
        
        
        
    }
    
    
    
    return v;
    
    
    
    
}
