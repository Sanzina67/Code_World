 /*sanzina hossain
 IIUC
 Dept-CSE*/
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n,m,i,j,count=0,ar[1001],b[1001],max=0,min=0;
     cin>>n>>m;
     int k=n;
     for(i=0;i<m;i++)
     {
         cin>>ar[i];
         b[i]=ar[i];
     }
     sort(ar,ar+m);
     sort(b,b+m,greater<int>());
     //reverse(b,b+m);

     for(j=0;j<m;j++)
         {
             while(ar[j]!=0 && n!=0)
             {
                 min=min+ar[j];
                 ar[j]--;
                 n--;
             }

         }
         i=0;
         while(k--)
         {
             max=max+b[i];
             b[i]--;
             sort(b,b+m,greater<int>());
         }


     cout<<max<<' '<<min;
 }

