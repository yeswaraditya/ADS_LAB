#include<bits/stdc++.h>
using namespace std;
#define INF 999999

void print(int dist[v][v])
{
   cout<<"this graph shows the all apir shortest path";
   for(int i=0;i<v;i++)
   {
    for (int j = 0; j <v; j++)
    {
        if(dist[i][j]==INF)
        {
            cout<<"INF"<<" ";
        }
        else 
        {
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
    
   }
}

void warshall(int dist[v][v])
{
   

    int i,j,k;

    for(k=0;k<v;k++)
    {
        for ( i = 0; i < v; i++)
        {
            for ( j = 0; j < v; j++)
            {
                if(dist[i][j]> dist[i][k]+dist[k][j] && dist[i][j]!=INF && dist[i][j]!= INF )
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
                
                print(dist);
            }
            
        }
        
    }
}

int main()
{
    int graph[v][v];
    cout<<"enter the graph matrix";

    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cin>>graph[i][j];
            if(graph[i][j]==-1)
            {
                graph[i][j]=INF;
            }
        }
    }

    warshall(graph);
}
