#include<bits/stdc++.h>
using namespace std;


void findpattern(string text,string pattern)
{
     int n=text.length();
     int m=pattern.length();
    int j;
     for(int i=0;i<=n-m;i++)
     {
        for( j=0;j<m;j++)
        {
            if(text[i+j] !=pattern[j])
            {
                break;
            }
            
        }
        if (j==m)
        {
            cout<<"pattern found index"<<i<<endl;
        }
     }
     
}

int main()
{
    int choice;
    string text;
    cout<<"1. from file\n2. from user\n enter choice ";
    cin>>choice;
    if(choice==1)
    {
        ifstream file("input.txt");
        {
            getline(file, text);
            file.close();
        }
    }
    else
    {
        cout<<"enter the text";
        cin>>text;
    }
   string pattern;
    cout<<"enter pattern";
    cin>>pattern;
   findpattern(text,pattern);
}