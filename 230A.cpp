#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,n,i,j,count=0;
    cin>>s>>n;
    long long a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swap(b[j],b[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(s>a[i])
        {
            count++;
        }
            s=b[i]+s;


    }
    if(count==n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
