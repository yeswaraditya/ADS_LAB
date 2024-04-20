#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nodes,edges;
    cout<<"enter no of nodes and edges";
    cin>>nodes>>edges;

    vector<int> adj[nodes];
    vector<int> indegree(nodes,0);

   cout<<"enter the edges";
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u,v;
        adj[u].push_back(v);
        indegree[v]++;
    }

    queue<int> q;

    for(int i=0;i<nodes;i++)
    {
        if (indegree[i]==0)
        {
            q.push(i);
        }
    
    }
    
    vector<int> ans;

    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        ans.push_back(node);

        for(auto it:adj[node])
        {
            indegree[it]--;
            if(indegree[it]==0)
            {
                q.push(it);
            }
        }
    }

    cout<<"the topo sort is "<<endl;
    for(auto it:ans)
    {
        cout<<it<<endl;
    }
}