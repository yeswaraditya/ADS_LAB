#include<bits/stdc++.h>
using namespace std;

void computeLPS(string pattern ,int m,int lps[])
{
    int len=0;
    lps[0]=0;
    int i=0;

    while(i<m)
    {
       if(pattern[i]==pattern[len])
       {
        len++;
        lps[i]=len;
        i++;

       }
       else
       {
        if(len!=0)
        {
            len=lps[len-1];

        }
        else
        {
            lps[i]=0;
            i++;
        }
       }
    }
}


void KMP(string text,string pattern)
{
    int n=text.length(),m=pattern.length();
    int lps[m];
    computeLPS(pattern ,m,lps);

    int i=0,j=0;

    while(i<n)
    {
        if(pattern[j]==text[i])
        {
            j++;
            i++;
        }
        if(j==m)
        {
            cout<<"pattern found at index"<<i-j<<endl;
            j=lps[j-1];
        }
        else if(i<n && pattern[j]!=text[i])
        {
            if(j!=0)
            {
                j=lps[j-1];
            }
            else
            i++;
        }
    }


}

int main(){
    
    int choice;
    cout<<"1.input from file\n 2.manual input"<<endl;
    cin>> choice;
    cin.ignore();

    string text,pattern;

    if(choice==1)
    {
        ifstream file("input.txt");
        if(!file.is_open())
        {
            cout<<"not able to open file"<<endl;
            return 1;
        }
        getline(file,text);
        file.close();

    }
    else
    {
        cout<<"enter text";
        getline(cin,text);
        
        
    }
    cout<<"enter pattern";
    getline(cin,pattern);

    KMP(text,pattern);



}