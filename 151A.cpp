#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np,a,b,x,z;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a=((k*l)/nl);
    b=(c*d);
    x=p/np;
    z=min(min(a,b),x);
    int y=z/n;
    cout<<y;

}


