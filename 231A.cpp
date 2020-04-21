#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,count,d=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        count=a+b+c;
        if(count>=2)
        {
            d++;
        }

    }
    cout<<d;
}
