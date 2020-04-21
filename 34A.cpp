#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a1;
    cin>>n>>a1;
    int  pre=a1,cur,res=1000,index1,index2,diff;
    for(i=2;i<=n;i++)
    {
        cin>>cur;
        diff=abs(cur-pre);
        if(diff<res)
        {
            res=diff;
            index1=i;
            index2=i-1;
        }
        pre=cur;
    }
    diff=abs(pre-a1);
    if(diff<res)
    {
        index1=n;
        index2=1;
    }
    cout<<index1<<' '<<index2;
    return 0;


}
