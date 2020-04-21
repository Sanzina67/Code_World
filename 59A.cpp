#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i,j,c1=0,c2=0,l;
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            c1++;
        }
        else
            {
            c2++;
        }
    }
    if(c1>c2)
    {

        for(i=0;i<l;i++)
    {

        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    cout<<str;
    }
    else
    {
         for(i=0;i<l;i++)
    {

        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    cout<<str;
    }

}
