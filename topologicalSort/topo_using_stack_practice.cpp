#include <bits/stdc++.h>
using namespace std;

void topologicalsortutil(int v,vector<int> adj[],stack<int> &stack,bool visited[])
{
    visited[v]=true;
    
    for(auto i=adj[v].rbegin();i!=adj[v].rend();++i)
    {
       if(! visited[*i])
       {
         topologicalsortutil(*i,adj,stack,visited);
       }

    }
    stack.push(v);
}

void topologicalsort(int n,vector<int> adj[])
{
    stack<int> stack;
    bool *visited=new bool[n];

    for(int i=0;i<n;i++)
    {
        if(visited[i]==false)
        {
            topologicalsortutil(i,adj,stack,visited);

        }
    }

    cout<<"topological sort"<<endl;

    while(!stack.empty())
    {
        cout<<stack.top()<<" ";
        stack.pop();
    }
    cout<<endl;
    delete[] visited;
}

int main()
{
    int n,m;
    cout<<"enter no of nodes and edges";
    cin>>n>>m;

    vector<int> adj[n];

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);

    }

    topologicalsort(n,adj);

}