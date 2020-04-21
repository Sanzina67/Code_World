#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int l=str1.size();
    int i=0;
    while(i<l)
    {
        if(str1[i]==str2[i])
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
        i++;
    }
    return 0;
}
