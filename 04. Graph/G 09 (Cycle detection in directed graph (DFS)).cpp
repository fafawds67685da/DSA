#include<iostream>
#include<vector>
using namespace std;
class g
{
public:
    void cycle (int m, vector<vector<int>>& graph)
    {
        for(int s =0;s<m;s++){
        int visited[m] = {0};
        visited[s] =1;
        vector<int>stack;
        stack.push_back(s);
        while(!stack.empty())
        {
            int u = stack.back();
            int z =0;
            for(int i =0;i<m;i++)
            {
                if(graph[u][i]==1 && visited[i]==0)
                {
                    visited[i]+=1;
                    stack.push_back(i);
                    z=1;
                }
                if(i==s && graph[u][i]==1)
                {
                    if(visited[i]==1)
                    {
                        cout<<"\t cycle exist \n";
                        return;
                    }
                }
            }
            if(z==0)
            {
                if(stack.back()==s && visited[stack.back()]==1)
                {
                    cout<<"\t NO cycle exist \n";
                    return;
                }
                stack.pop_back();
            }
        }

    }}
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

    g ob;
    ob.cycle(m,a);
    return 0;
}
