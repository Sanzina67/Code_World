#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,currentmax=0,lastchild=0,temp,need;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>need;
        temp=(need/m)+((need%m)>0);
        if(temp>=currentmax)
        {
            currentmax=temp;
            lastchild=i;
        }
    }
    cout<<lastchild;
}
