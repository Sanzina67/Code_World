#include <bits/stdc++.h>

using namespace std;

string a,b;

int main()
{
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        if(b[i]>='a' && b[i]<='z')
        {
            b[i]=b[i]-32;
        }
    }
    if(a>b)cout<<1;
    else if(a<b)cout<<-1;
    else cout<<0;
    return 0;
}

