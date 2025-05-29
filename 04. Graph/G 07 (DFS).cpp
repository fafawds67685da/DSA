#include<iostream>
#include<vector>
using namespace std;
#define MAX 100
class DP
{
public:
    void dfs(int m, int s, int d, int g[MAX][MAX])
    {
        int visited[m]={0};
        visited[s]=1;
        vector<int>stack;
        stack.push_back(s);
        cout<<s<<" ";
        while(stack.size()!=0)
        {
            int u = stack.back();
            int z = 0;
            //stack.pop_back();
            for(int i =0;i<m;i++)
            {
                if(g[u][i]==1 && visited[i]==0)
                {
                    cout<<i<<" ";
                    stack.push_back(i);
                    visited[i]=1;
                    if(i==d)
                    {
                        return;
                    }
                    z=1;
                    break;
                }
            }
            if(z==0)
            {
                stack.pop_back();
            }
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
    ob.dfs(m,s,d,a);
    return 0;
}
