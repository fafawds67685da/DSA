class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) 
    {
        int m = graph.size();
        vector<int> visited(m, 0);  // ✅ Good C++ practice

        visited[0]=5;
        vector<int>stack;
        stack.push_back(0);
        while(stack.size()!=0)
        {
            int u = stack.back();
            int z = 0;
            for(int i =0;i<graph[u].size();i++)
            {
                if(visited[graph[u][i]]==0)
                {
                    if (visited[u] == 5) 
                    {
                        visited[graph[u][i]] = 10;
                    } 
                    else 
                    {
                        visited[graph[u][i]] = 5;
                    }

                    stack.push_back(graph[u][i]);
                    z=1;
                }
                if(visited[u]==visited[graph[u][i]])
                {
                    return false;
                }
                
            }
            if(z==0)
            {
                stack.pop_back();
            }
        }
        return true;
    }


};
