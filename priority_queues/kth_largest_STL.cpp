#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,element;
    vector<int> heap;
    cout<<"enter the no of elements\n";
    cin>>n;

    cout<<"enter the elements\n";
    
    for(int i=0;i<n;i++)
    {
       cin>>element;
        heap.push_back(element);
    }

    make_heap(heap.begin(),heap.end());
    sort_heap(heap.begin(),heap.end());

    int k;

    cout<<"which largest element do u want";
    cin>>k;
    cout<<"the kth largest element is"<<heap[n-k]<<endl;
    
}