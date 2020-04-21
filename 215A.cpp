#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,a[100],b[100],c[100],k=0,j,value,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(b[j]%a[i]==0)
            {
                value=b[j]/a[i];
                c[k]=value;
                k++;
            }
        }
    }
    /*for(i=0;i<k;i++)
    {
        cout<<c[i]<<' ';
    }*/
    int max=c[0];
    for(i=0;i<k;i++)
    {
        if(max<c[i])
        {
            max=c[i];
        }
    }
    for(j=0;j<k;j++)
    {
        if(max==c[j])
        {
            count++;
        }
    }
    cout<<count;
}
