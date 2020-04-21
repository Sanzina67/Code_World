#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,sum=0,ar[1001];
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
     /*for(i=0;i<n;i++)
    {
        cout<<ar[i]<<' ';
    }
    cout<<endl;*/
    for(i=0;i<m;i++)
    {
        if(ar[i]<0 || ar[i]==0)
        {
            sum=sum+abs(ar[i]);

        }
    }
    cout<<sum;

}
