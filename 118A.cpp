#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string str;
    cin>>str;
    int len=str.size();
     for( i=0;i<len;i++)
    {
        if(str[i]>=65 && str[i]<=92)
	    {
		    str[i]=str[i]+32;

		}
    }

    for(i=0;i<len;i++)
    {

        if(str[i]!='a' && str[i]!='e' && str[i]!='i' &&
		str[i]!='o' &&str[i]!='u' && str[i]!='y')
		{
		    cout<<'.'<<str[i];
		}



    }
 return 0;
}
