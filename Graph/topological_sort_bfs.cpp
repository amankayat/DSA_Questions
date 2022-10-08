//function of topological sort in cpp

vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   
	    vector<bool> isvisited(V,0);
	    vector<int> res;
	    queue<int> q;
	    vector<int> indegree(V,0);
	    for(int i=0;i<V;i++){
	        for(auto x:adj[i])
	        indegree[x]++;
	    }
	    for(int i=0;i<V;i++)
        {
            if(indegree[i]==0)
            q.push(i);
        }	   
        
        while(!q.empty()){
            int x = q.front();
            q.pop();
            res.push_back(x);
            for(auto it: adj[x]){
                
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
	    
	    return res;
	}
