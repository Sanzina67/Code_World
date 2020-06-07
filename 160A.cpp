#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100],i,j,n,count=0,sum=0,t=0 ;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }
    sort(ar,ar+n,greater<int>());


    for(i=0;i<n;i++)
    {
        t=t+ar[i];
        sum=sum-ar[i];
        if(t>sum)
        {
           count++;
           cout<<count;
            return 0;
        }
        else
        {


        count++;

        }

    }
    cout<<count;
}
