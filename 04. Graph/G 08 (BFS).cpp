#include<iostream>
#include<queue>
using namespace std;
#define MAX 100
class DP
{
public:
    void bfs(int m, int s, int d, int g[MAX][MAX])
    {
        int visited[m]={0};
        visited[s]=1;
        queue<int>q;
        q.push(s);
        cout<<s<<" ";
        while(q.size()!=0)
        {
            int u = q.front();
            for(int i =0;i<m;i++)
            {
                if(g[u][i]==1 && visited[i]==0)
                {
                    cout<<i<<" ";
                    q.push(i);
                    visited[i]=1;
                    if(i==d)
                    {
                        return;
                    }
                }
            }
            q.pop();
        }
    }
};
int main()
{
    int m;
    cout<<"\t Enter the order of the matrix \n";
    cin>>m;
    int a[MAX][MAX];
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

    int s,d;
    cout<<"\t Enter the source and destination node \n";
    cin>>s>>d;
    DP ob;
    ob.bfs(m,s,d,a);
    return 0;
}
