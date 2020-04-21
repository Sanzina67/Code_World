#include <iostream>
#include <algorithm>
using namespace std;
int main()
 {

	int n,count=0;
    char character;
    cin>>n;
    string s;
    cin>>s;
    int l=s.size();
    sort(s.begin(),s.begin()+s.size());
    //cout<<s<<endl;
    for(int i=0;i<s.size();i++)
     {

	    if(i%n==0)
        {

	       character=s[i];
        }

	    if(s[i]==character)
        {

	        count++;
        }

	}
	//cout<<count<<endl;

	if(l==count && count%n==0)
    {

	    for(int i=0;i<n;i++)
        {

	        for(int l=0;l<s.size();l=l+n)
            {

	            cout<<s[l];

	        }

	    }

	}
	else
    {

	    cout<<"-1";

	}



	return 0;

}
