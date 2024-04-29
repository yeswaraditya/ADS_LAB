#include<bits/stdc++.h>
using namespace std;
vector<int> vec;


void heapify(int n,int i)
{
    int largest=i;
    int leftchild=2*i+1;
    int rightchild=2*i+2;

    if(leftchild<n && vec[leftchild]>vec[largest] )
    {
        largest=leftchild;
    }
     if (rightchild<n && vec[rightchild]>vec[largest] )
    {
        largest=rightchild;
    }
    if(largest!=i)
    {
        swap(vec[i],vec[largest]);
        heapify(n,largest);
    }
}

void heaspsort(int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    {
         heapify(n,i);


    }

    for(int i=(n/1);i>=0;i--)
    {
        swap(vec[0],vec[i]);
        heapify(n,i);
    }
}

int main()
{
    int n;
    cout<<"enter no of elements"<<endl;
    cin>>n;
    vec.reserve(n);

    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        vec.push_back(element);
    }
    
    heapsort(n);

}