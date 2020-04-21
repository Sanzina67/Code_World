#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,stay[100];
    cin>>n;
    int l[n],r[n];
    for(i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];

    }
    stay[0]=r[0];
    for(i=1;i<n;i++)
    {
        stay[i]=stay[i-1]-l[i]+r[i];

    }
    int max=stay[0];
    for(j=1;j<n;j++)
    {
        if(max<stay[j])
        {
            max=stay[j];
        }
    }
    cout<<max;

}
