#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,a=0;
    char str[100];
    cin>>n;
   cin>>str;

        for(i=0;i<n;i++)
    {
       if(str[i]==str[i+1])
       {
           a++;
       }

    }
    cout<<a;
    return 0;
}
