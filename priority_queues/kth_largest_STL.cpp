#include<bits/stdc++.h>
using namespace std;

vector<int> vec;

int main()
{
    cout<<"enter no of elements";
    int n;
    cin>>n;

    vec.resize(n);

    for(int i=0;i<n;i++)
    {
       int element;
       cout<<"enter element";
       vec.push_back(element);

    }
    
    make_heap(vec.begin(),vec.end()); // makes min heap
    sort_heap(vec.begin(),vec.end());   // sort heap to ascending

    int k;
    cout<<"which largest do u want";
    cin>>k;
    cout<<"largest kth element is "<<vec[n-k]<<endl;

}