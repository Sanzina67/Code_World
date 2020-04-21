#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0,z=0,i,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        if(k==0)
        {
            f++;
        }
        else if(k==5)
        {
            z++;
        }
    }
    if(f==0)
    {
        cout<<-1;
    }
    else if(z<9)
    {
        cout<<0;
    }
    else
    {
        z=z-(z%9);
        for(i=0;i<z;i++)
        {
            cout<<5;
        }
        for(i=0;i<f;i++)
        {
            cout<<0;
        }
    }
}
