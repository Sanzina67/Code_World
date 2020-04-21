#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin>>str;
    int l=str.size();
    int i=0,m=0;
    while(i<l)
    {
        if(str[i]=='7' || str[i]=='4')
        {
            m++;
        }
        i++;
    }
    if(m==4 || m==7)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
