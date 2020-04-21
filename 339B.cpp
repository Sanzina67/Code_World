#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,d,start=1,end,i,ans=0;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>end;
        d=end-start;
        if(d<0)
        {
            d=d+n;
        }
        ans=ans+d;
        start=end;

    }
    cout<<ans;
}
