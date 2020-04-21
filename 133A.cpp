#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int l=str.size();
    int i=0;
    while(i<l)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
        {
            cout<<"YES";
            return 0;
        }
        i++;
    }
    cout<<"NO";
}
