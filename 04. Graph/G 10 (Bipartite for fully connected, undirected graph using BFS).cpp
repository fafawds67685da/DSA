#include<iostream>
#include<queue>
using namespace std;
class g
{
public:
    void Bi(int m, int s, vector<vector<int>>& graph)
    {
        int visited[m] = {0};
        visited[s] =5;
        queue<int>q;
        q.push(s);
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            for(int i =0;i<m;i++)
            {
                if (graph[u][i] == 1 && visited[i] == visited[u])
                {
                    cout<<"\t Not Bipartite \n";
                    return;
                }
                if(graph[u][i]==1 && visited[i]==0)
                {
                    if(visited[u]==5)
                    {
                        visited[i]=10;
                    }
                    else
                    {
                        visited[i]=5;
                    }
                    q.push(i);

                }
            }
        }
        cout<<"\t Bipartite \n";
    }
};

int main()
{
    int m;
    cout<<"\t Enter the order of the matrix \n";
    cin>>m;
    vector<vector<int>> a(m, vector<int>(m)); // ✅ Proper initialization

    cout<<"\t Enter the elements of the graph \n";
    for(int i =0;i<m;i++)
    {
        cout<<"\t For the node "<<i<<"\n";
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\t The entered graph is :\n";
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    int s;
    cout<<"\t Enter the source node \n";
    cin>>s;
    g ob;
    ob.Bi(m,s,a);
    return 0;
}
