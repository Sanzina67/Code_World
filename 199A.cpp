#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,first=0,second=0,newfib=1,temp=0;
    cin>>n;
    while(newfib<n)
    {
        first=second;
        temp=newfib;
        newfib=newfib+second;
        second=temp;
    }
    if(n==1)
    {
        second=1;
    }
    cout<<first<<' '<<second-first<<' '<<first;
}
