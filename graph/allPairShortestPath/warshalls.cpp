#include<bits/stdc++.h>
using namespace std;
#define v 4
#define INF 99999


void print(int dist[v][v])
{
    int i,j;
    for(i=0;i<v;i++)
    {
        for ( j = 0; j < v; j++)
        {
           if(dist[i][j]==INF)
             cout<<"INF"<<" ";
        else
        {
            cout<<dist[i][j]<<" ";
        }
        }
        cout<<endl;
        
    }
}






void warshall(int dist[v][v])
{
    int i,j,k;

    for( k=0;k<v;k++)
    {
        for ( i = 0; i < v; i++)
        {
              for ( j = 0; j < v; j++)
              {
                if(dist[i][j] > dist[i][k] + dist[k][j] && dist[i][k] !=INF &&  dist[k][j] !=INF )
                {
                    dist[i][j]=dist[i][k] + dist[k][j];
                }
              }
              
        }
        
    }

    print(dist);
}



int main()
{
    int graph[v][v]={
        {0,5,INF,10},
        {INF,0,3,INF},
        {INF,INF,0,1},
        {INF,INF,INF,0},
    };

    warshall(graph);
}
