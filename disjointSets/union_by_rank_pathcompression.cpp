#include<bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<int> ranks;

int find(int node)
{
    if(parent[node]==node)
    {
        return node;

    }
    return parent[node]=find(parent[node]);
}


void unionset(int x,int y)
{
    x=find(x);
    y=find(y);

    if(ranks[x]<ranks[y])
    {
       parent[y]=x;
    }
    else if( ranks[x] > ranks[y])
    {
        parent[x]=y;
    }
    else
    {
        parent[x]=y;
        ranks[x]++;
    }
}
int main()
{
    int n,choice;
    cout<<"enter no of elements";
    cin>>n;

    parent.resize(n);
    ranks.resize(n,0);

    for(int i=0;i<n;i++)
    {
        parent[i]=i;
    }

     do{
        cout<<"\n1.find \n 2.union \n 3.exit \n enter your choice";
        cin>>choice;

        switch(choice)
        {
                case 1:
                {
                    int element;
                    cout<<"enter the element";
                    cin>>element;
                   int root= find(element);
                   cout<<"parent of"<<element<<"is"<<root<<endl;
                   break;
                }

                case 2:
                {
                    int element1,element2;
                    cout<<"enter the elements";
                    cin>>element1>>element2;
                    unionset(element1,element2);
                   cout<<"union performed"<<endl;
                   break;
                }

                case 3:
                {
                    break;
                }
                 default:
                cout << "Invalid choice. Try again." << endl;
        }
    }while(choice!=3);
}