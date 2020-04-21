#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,len,count,i;
    string str;
    cin>>str;
    len=str.size();
    for(i=0;i<len;)
    {
        if((str[i]=='1' && str[i+1]=='1' && str[i+2]=='1' && str[i+3]=='1'&& str[i+4]=='1' && str[i+5]=='1' && str[i+6]=='1')||(str[i]=='0' && str[i+1]=='0' && str[i+2]=='0' && str[i+3]=='0'&& str[i+4]=='0' && str[i+5]=='0' && str[i+6]=='0'))
        {
            cout<<"YES";
            return 0;
        }
        else
        {
           i++;
        }
    }
    cout<<"NO";

}
