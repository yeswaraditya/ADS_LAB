#include<bits/stdc++.h>
using namespace std;

vector<int>parent;

int find(int x)
{
    if(parent[x]!=x)
    {
        parent[x]=find(parent[x]);

    }
    return parent[x];

}

void unionset(int x,int y)
{
    int rootX=find(x);
    int rootY=find(y);

    if(rootX!=rootY)
    {
        if(rootX < rootY)
        {
            parent[rootY]=rootX;


        }
        else
        {
            parent[rootX]=rootY;

        }
    }
};

int main()
{
    int n,choice;
    cout<<"enter no of elements";
    cin>>n;

    parent.resize(n);

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

