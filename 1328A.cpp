#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i,l;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
         l=(b-(a%b))%b;
         cout<<l<<endl;
    }
}
