#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,len,flag=1;
    string str;
    cin>>str;
    len=str.size();
    for(i=0;i<len;i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i=i+2;
            if(!flag)
            {
                cout<<" ";
            }
            continue;
        }
        else
        {
            flag=0;
            cout<<str[i];
        }
    }
    return 0;
}
