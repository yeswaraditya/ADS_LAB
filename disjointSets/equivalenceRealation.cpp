#include<bits/stdc++.h>
using namespace std;

class Disjoint
{
    private:
    vector<int>parent;
    vector<int>rank;
    
    public:
     Disjoint(int n)
     {
        parent.resize(n);
        rank.resize(n,0);

        for(int i=0;i<n;++i)
        {
            parent[i]=i;
        }
     }

    int find(int x)
    {
        if(parent[x]!=x)
        {
            parent[x]=find(parent[x]);
            return parent[x];
        }
    }

     void unionsets(int x,int y)
     {
        int rootX=find(x);
        int rootY=find(y);

        if(rootX != rootY)
        {
            if(rank[rootX]< rank[rootY])
            {
                parent[rootX]=rootY;

            }

            else if(rank[rootX]>rank[rootY])
            {
                parent[rootY]=rootX;
            }

            else
            {
                parent[rootY]=rootX;
                rank[rootX]++;
            }

        }
        
     }
};

int main()
{
  int n;
  cout<<"enter the number of elements";
  cin>>n;
  Disjoint ds(n);

  while(true)
  {
    int x,y;
    cout<<"enter 2 elements to perform union(enter -1 to stop)";
    cin>>x;
    
    if(x==-1)
    {
        break;
    }

    cin>>y;
    ds.unionsets(x,y);

   
  }
   while(true)
    {
        int x,y;
        cout<<"enter two sets to checl if they are in same set or not (enter -1 to stop)";
        cin>>x;

        if(x==-1)
        {
            break;
        }
        cin>>y;
        cout << "Are they in the same set? " << (ds.find(x) == ds.find(y) ? "Yes" : "No") << endl;
    }
}