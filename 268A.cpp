#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[101],b[101],count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                count++;
            }
        }
    }
    cout<<count;
}
