#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,ar[100],i,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        //sort(ar,ar+n);
        if(n%2==0)
        {
            k=floor(n/2);
        cout<<ar[k];
        }
        else
        {
             k=floor(n/2);
        cout<<ar[k+1];
        }
    }
}
