#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n,i,d=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str;
              if(str=="++X" || str=="X++")
        {
            d++;
        }
        else
        {
            d--;
        }
    }
    cout<<d;
}
