class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        
        unordered_map<int, vector<int>> g;
        
       for(auto e:edges)
       {
           g[e[0]].push_back(e[1]);
           g[e[1]].push_back(e[0]);
       }
        
        bool visited[n];
        
        for(int i = 0; i<n; i++){
            visited[i] = false;
        }
        
        queue<int> q;
        q.push(start);
        
        visited[start] = true;
        
        while(q.empty() == false)
        {
            int u = q.front();
            q.pop();
            
            if(u == end){
                return true;
            }
            
            for(auto v:g[u])
            {
                if(visited[v] == false)
                {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        return false;
    }
};