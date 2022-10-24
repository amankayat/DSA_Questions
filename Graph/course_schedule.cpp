class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        vector<int> indegree(numCourses, 0);
        
        for(int i=0; i<prerequisites.size(); i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        
        for(int i=0; i<numCourses; i++){
            for(auto v: adj[i]) indegree[v] += 1;
        }
        
        queue<int> q;
        for(int i=0; i<numCourses; i++){
            if(indegree[i] == 0) q.push(i);
        }
        
        int count = 0;
        while(!q.empty()){
            auto node = q.front(); q.pop();
            count ++;
            
            for(auto u: adj[node]){
                if(--indegree[u] == 0) q.push(u);
            }
        }
        
        return count == numCourses;
    }
};