#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n,i,j,l;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str;
        l=str.size();
        if(l<=10)
        {
            cout<<str<<endl;
        }
        else{
            cout<<str[0]<<l-2<<str[l-1]<<endl;
        }
    }
    return 0;
}
