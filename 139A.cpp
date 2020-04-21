#include<bits/stdc++.h>
using namespace std;

int d=0;
int ar[8];
int main()
{
    int n,i,ar[8];
    cin>>n;
   for(i=1;i<=7;i++)
   {
       cin>>ar[i];
       d=d+ar[i];
   }
  if(d>=n)
  {
      int k=0;
      for(int i=1;i<=7;i++)
       {
           k=k+ar[i];
           if(k>=n)
           {
                cout<<i;
               break;
           }
       }
  }
  else{
    while(n>d)
    {
        n=n-d;
    }
    int k=0;
    for(int i=1;i<=7;i++)
       {
           k=k+ar[i];
           if(k>=n)
           {
                cout<<i;
               break;
           }
       }
  }


}
