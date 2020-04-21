#include<bits/stdc++.h>
using namespace std;
bool prime(int i);
int main()
{
    int a,b,n,i,j,k;
    cin>>a>>b;
    for(i=a+1;i<=b;i++)
    {
        if(prime(i))
        {
            k=i;
            break;
        }
    }
    if(k==b)
    {
        cout<<"YES";
    }
    else
    {
    cout<<"NO";
    }
return 0;


}
bool prime(int i)
{
      if(i==0 && i==1)
      {
          return false;
      }
      for(int j=2;j*j<=i;j++)
      {
          if(i%j==0)
          {
              return false;
          }
      }
      return true;




}
