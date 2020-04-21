#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,i,ar[101],b[101],j=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        int max=ar[1];
        for(i=1;i<=n;i++)
        {
            if(max<ar[i])
            {
                max=ar[i];
            }
        }
        cout<<max<<endl;
        for(i=1;i<=max;i++)
        {
            if(i!=ar[i])
            {
                b[j]=i;
                j++;
            }
        }
        for(int k=1;k<=j;k++)
        {
            cout<<b[k]<<' ';
        }
        cout<<endl;
        cout<<b[x+1]-1;

    }
}
