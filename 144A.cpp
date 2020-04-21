#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,l=0,ar[100],m=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int max=ar[0];
    int min=ar[0];
    for(i=1;i<n;i++)
    {
        if(max<ar[i])
        {
            max=ar[i];
            l=i+1;
        }

        if(min>=ar[i])
        {

            min=ar[i];
            m=i+1;
        }
    }

    if(m==0)
    {
        m=1;
    }
    if(l==0)
    {
        l=1;
    }
    if(l>m)
    {
        int c=(l-1)+(n-m)-1;
        cout<<c;
    }
    else
    {
         int c=(l-1)+(n-m);
        cout<<c;
    }

    return 0;
}

