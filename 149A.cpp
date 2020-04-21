#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,ar[13],i,count=0,sum=0;
    cin>>k;
    for(i=0;i<12;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+12);
     /*for(i=0;i<12;i++)
    {
        cout<<ar[i]<<' ';
    }
    cout<<endl;*/
    if(k==0)
    {
        cout<<0;
        return 0;
    }
    else
    {
        for(i=11;i>=0;i--)
        {
            sum=sum+ar[i];
            count++;
            if(sum==k || sum>k)
            {
              break;
            }
        }

    }
    if(sum<k)
    {
        cout<<-1;
    }
    else
    {
        cout<<count;
    }
    return 0;
}
