#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    char s[105];
    cin >> s;
    int len = strlen(s);
    //cout<<len<<endl;
    sort(s, s+len);
    //cout<<s;
    int count =0;
    for(int i=0; i<len; i++)
    {
        if(s[i] != s[i+1])
        {
            count++;
        }
        cout<<count<<endl;
        cout<<s[i]<<' '<<s[i+1]<<endl;
    }
    //cout<<count<<endl;
    if(count%2==0)
    {
        cout<<("CHAT WITH HER!\n");
    }
    else
    {
        cout<<("IGNORE HIM!\n");
    }
}
