#include<iostream>
using namespace std;
int main()
    {
        int t;
        cin>>t;
        for(int i=0;i<t;i++)
        {
            int n,k;
            cin>>n>>k;
            //int x=n/k;
            if((n+k)%2!=0)
            {
                cout<<"Yes";
            }
            else
            {
                cout<<"No";
            }
            cout<<endl;
        }
        return 0;
    }
