#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[6][6],n,i,j,ans,x,y;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)

        {
            cin>>ar[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)

        {
            if(ar[i][j]==1)
            {
                x=i+1;
                y=j+1;
            }
        }
    }
    ans=abs(x-3)+abs(y-3);
    cout<<ans;
}
