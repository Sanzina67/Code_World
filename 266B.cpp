#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,t,i,j;
   char ch[100];
   cin>>n>>t;
   for(j=0;j<n;j++)
   {
      cin>>ch[j] ;
   }
   for(i=0;i<t;i++)
   {
       for(j=0;j<n-1;j++)
       {
           if(ch[j]=='B' && ch[j+1]=='G')
           {
               ch[j]='G';
               ch[j+1]='B';
               j++;
           }
       }
   }
for(j=0;j<n;j++)
   {
      cout<<ch[j] ;
   }





}
