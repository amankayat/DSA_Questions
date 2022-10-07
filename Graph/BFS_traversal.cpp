vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visited(V,false);
        vector<int>bfs;
        
        int i=0;
        queue<int>q;
        q.push(i);
        visited[i]=true;
        while(!q.empty()){
            vector<int>x=adj[q.front()];
            bfs.push_back(q.front());
            q.pop();
            for(auto it:x){
                if(!visited[it])
                q.push(it);
                visited[it]=true;
            }
    }
    return bfs;
    }