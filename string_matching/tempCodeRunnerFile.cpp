#include<bits/stdc++.h>
using namespace std;

void findpattern( string text,string pattern)
{
    int n=text.length(),m=pattern.length();

    for(int i=0;i<n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)
        {
            if( text[i+j]!=pattern[j])
            {
                break;
            }
            if(j==m)
            cout<<"pattern found at index"<<i<<endl;
        }
    }
}

int main()
{
    int choice;
    string text,pattern;

    cout<<"1.input from file \n 2.manual input";
    cin>>choice;

    if(choice==1)
    {
        ifstream file("input.txt");
        getline(file,text);
        file.close();
    }
    else
    {
        cout<<"enter text:";
        cin>>text;
    }

    cout<<"enter pattern";
    cin>>pattern;

    findpattern(text,pattern);
}