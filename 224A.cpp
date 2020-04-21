#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b,c,sum;
    cin>>x>>y>>z;
    a=sqrt((x*y)/z);
    b=sqrt((x*z)/y);
    c=sqrt((z*y)/x);
    sum=(a+b+c)*4;
    cout<<sum;
    return 0;
}
