/*sanzina hossain
IIUC
Dept-CSE*/
#include<bits/stdc++.h>
using namespace std;
int main()
    {
        long long n,max,min,count=0,i,j,a=0,b=0,sum=0;
        cin>>n;
        long long ar[n];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
         max=ar[0];
         min=ar[0];
        for(i=1;i<n;i++)
        {
            if(max<=ar[i])
            {
                max=ar[i];
            }
            if(min>=ar[i])
            {
                min=ar[i];
            }

        }
        //cout<<max<<' '<<min<<endl;

         sort(ar,ar+n);
        if(max==min)
        {
           for(i=n-1;i>0;i--)
           {
               sum=sum+i;
           }
        }
        else
        {

        for(i=0;i<n;i++)
        {
            if(ar[i]==min)
            {
                a++;
            }
            else
            {
                break;
            }
        }
        for(i=n-1;i>=0;i--)
           {

           if(ar[i]==max)
            {
                b++;
            }

           else
           {
               break;
           }
        }
        sum=a*b;
        }

        cout<<(max-min)<<' '<<sum;
    }
