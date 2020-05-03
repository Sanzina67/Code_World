#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,n,i,count=0;
    cin>>a>>b>>n;
    for(i=0;i<10;i++)
    {
        if((a*10+i)%b==0)
        {
            cout<<a*10+i;
            string  s(n-1, '#');
            cout<<s<<endl;
            count=1;
            break;
        }
    }
    if(count==0)
    {
        cout<<-1<<endl;
    }
    return 0;
}
