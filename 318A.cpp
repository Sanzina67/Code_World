#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,s,part;
    cin>>n>>k;
    if(n%2==0)
    {
        part=n/2;
    }
    else
    {
        part=n/2+1;
    }
    if(k<=part)
    {
        s=(k*2)-1;
    }
    else
    {
        s=(k-part)*2;
    }
    cout<<s;
}
