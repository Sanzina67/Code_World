#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ar[100];
     double ans,sum=0.0;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
        for(i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    ans=sum/n;
    printf("%.12lf",ans);
    return 0;
}
