#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[1001],b[1001],p=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
        int l=0,m=0,k=0,s=0,x,y;
        x=a[i];
        y=b[i];
        for(j=0;j<n;j++)
        {
            if(x==a[j])
            {
                if(b[j]>y)
                {
                    l++;
                }
                if(b[j]<y)
                {
                    m++;
                }
            }
            if(y==b[j])
            {
                if(a[j]>x)
                {
                    k++;
                }
                if(a[j]<x)
                {
                    s++;
                }
            }
        }
        if(l>0 && m>0 && k>0 && s>0)
        {
            p++;
        }
    }
    cout<<p;
    return 0;

}
