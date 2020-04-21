#include<bits/stdc++.h>
#include<string.h>;
using namespace std;
int main()
{
    string s;

    cin>>s;
    int l=s.size();
    int ar[100], n=0,j,i;

    if(s == "1" || s =="2" || s =="3" )
    {
        cout<<s;
    }
    else

    {
        for(i=0;i<l;i+=2){
        for(j=0;j<l-2;j+=2){
            if(s[j]>s[j+2]){
                swap(s[j],s[j+2]);
            }
        }
    }

cout<<s;
    }
}
