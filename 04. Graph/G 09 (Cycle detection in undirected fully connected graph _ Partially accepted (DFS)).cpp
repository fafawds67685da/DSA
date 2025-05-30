class Solution {
public:
    bool isCycle(int V, vector<vector<int>>& edges) 
    {
        // Create V x V matrix initialized to 0
        vector<vector<int>> graph(V, vector<int>(V, 0));

        for (int i = 0; i < edges.size(); i++) 
        {
            int a = edges[i][0];
            int b = edges[i][1];
            graph[a][b] = 1;
            graph[b][a] = 1; // Since the graph is undirected
        }
for(int s=0;s<V;s++){
        vector<int>visited(V,0);
        visited[s]=1;
        vector<int>stack;
        stack.push_back(s);
        while(stack.size()!=0)
        {
            int u = stack.back();
            int z = 0;
            for(int i = 0;i<V;i++)
            {
                if(visited[i]==0)
                {
                    visited[i]+=1;
                    stack.push_back(i);
                    z=1;
                }
                if(i==s)
                {
                    if(visited[i]==1)
                    {
                        visited[i]=2;
                    }
                    if(visited[i]==2)
                    {
                        return true;
                    }
                }
                
            }
            if(z==0)
            {
                stack.pop_back();
            }
            
        }
    }
    return false;
    }
};
