#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i=0,len,count=0;
    cin>>str;
    len=str.size();
    while(i<len)
    {
         if(str[i]=='1' && str[i+1]=='4' && str[i+2]=='4')
         {
             i=i+3;
         }
         else if(str[i]=='1' && str[i+1]=='4')
         {
             i=i+2;
         }
           else if(str[i]=='1')
        {
            i++;
        }
        else
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}
