#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int i,n,m,ar[1001],min;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+m);
    min=ar[n-1]-ar[0];
    for(i=0;i<(m-n);i++)
    {
        if(ar[n+i]-ar[i+1]<min)
        {
            min=ar[n+i]-ar[i+1];
        }
    }
    cout<<min;
}
