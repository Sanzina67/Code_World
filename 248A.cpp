#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a=0,b=0,c=0,d=0,res,res1,res2;
    cin>>n;
    int l[n],r[n];
    for(i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];
    }
    for(j=0;j<n;j++)
    {
       if(l[j]==0)
       {
           a++;
       }
       else
       {
           b++;
       }
    }
    for(j=0;j<n;j++)
    {
       if(r[j]==0)
       {
           c++;
       }
       else
       {
           d++;
       }
    }
    if(a>b)
    {
        res1=n-a;

    }
    else
    {
        res1=n-b;

    }
    if(c>d)
    {
        res2=n-c;

    }
    else
    {
        res2=n-d;

    }

    res=res1+res2;
    cout<<res;
    return 0;

}
