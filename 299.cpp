#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,ar[100],count;
    cin>>t;
    while(t--)
    {
        count =0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(ar[j]>ar[j+1])
                {
                    swap(ar[j],ar[j+1]);
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.",count);
        cout<<endl;
    }
    return 0;
}
