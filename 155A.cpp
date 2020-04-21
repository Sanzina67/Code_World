#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,max,min,ar[10000],count1=0,count2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    max=ar[0];
        min=ar[0];
    for(i=1;i<n;i++)
    {
        if(max<ar[i])
        {
            max=ar[i];
            count1++;
        }
    }
    //cout<<count1<<' ';
     for(i=1;i<n;i++)
    {
        if(min>ar[i])
        {
            min=ar[i];
            count2++;
        }
    }
    //cout<<count2<<' ';
    int c=count1+count2;
    cout<<c;
}
