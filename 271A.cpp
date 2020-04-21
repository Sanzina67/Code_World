#include<bits/stdc++.h>
using namespace std;
int digit(int n);
int main()
{
   int n,x,i;
   cin>>n;
   for(i=n+1;i<=9012;i++)
   {
       x=digit(i);
       if(x==1)
       {
           cout<<i<<endl;
           break;
       }
   }
   return 0;
}
int digit(int n)
{
    int a,b,c,d;
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000)%10;
    if(a!=b  && a!=c && a!=d && b!=c&& b!=d && c!=d)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
