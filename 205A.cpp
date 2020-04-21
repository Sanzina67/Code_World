#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,min=1000000001,index=0,i,k=0,t;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        if(min>t)
        {
            min=t;
            index=i;
            k=1;

        }
        else if(min==t)
        {
            k++;
        }
    }
    if(k>1)
    {
        cout<<"Still Rozdil";

    }
    else
    {
        cout<<index;
    }
}
