#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,first=0,second=0;
    string str,str1,str2;
    cin>>n>>str;
    for(i=1;i<n;i++)
    {
        cin>>str1;
        if(str==str1)
        {
            first++;

        }
        else
        {
            second++;
            str2=str1;
        }
    }
    if(first+1>second)
    {
        cout<<str;
    }
    else
    {
        cout<<str2;
    }








}

